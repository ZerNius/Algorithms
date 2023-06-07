#include <iostream>
#include <vector>
#include "KMP-Implementation.cpp"
using namespace std;

void substring(vector<int> pi, string text, string pattern)
{
    int t_size = text.size();
    int j =0;
    for(int i=0; i<t_size; i++)
    {
        if(pattern[j] == text[i])
            j++;
        if(j == t_size)
        {
            cout<<"Pattern found at "<<i - j;
            j = pi[j - 1];
        }
        else if(i < t_size && pattern[j] != text[i])
        {
            if(j != 0 )
                j = pi[j - 1];
        }
    }
}

int main()
{
    string pattern, text;
    cin>>pattern>>text;
    vector<int> pi = KMP(pattern);
    substring(pi, text, pattern);
    return 0;
}