#include <iostream>
#include <algorithm>
using namespace std;


void print(int *c, int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
}

void mul(int *c, int size)
{
    for(int i=0; i<size; i++)
    {
        c[i] = c[i] * i;
    }
}

int main()
{
    int a=10 , b =20;
    int *p = &a;
    cout<<p<<" "<<*p<<" "<<&p;

    int c[10];
    for(int i=0; i<10; i++)
        c[i] = i+1;

    print(c, 10);
    mul(c, 10);
    print(c, 10);
    return 0;
}