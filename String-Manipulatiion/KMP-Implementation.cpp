#include <iostream>
#include <vector>
using namespace std;

vector<int> KMP(string pattern)
{
    int s = pattern.size();
    vector<int> v(s, 0);
    int j = 0;
    
    for(int i=1; i<s; i++)
    {
        if(pattern[i] == pattern[j])
        {
            j++;
            v[i] = j;
        }
        else
        {
            if(j != 0 )
                j = v[j-1];
            else  
                v[i] = 0;
        }
    }
    return v;
}

// //Driver Function
// int main(){
//     string pattern;
//     cin>>pattern;

//     vector<int> pi = KMP(pattern);
    
//     for(auto itr : pi)
//     {
//         cout<<itr<<endl;
//     }
//     return 0;
// }