#include<iostream>
using namespace std;
int main()
{
    int *p = NULL;
    p = (int *)0x1110;
    cout<<p<<endl;
    cout<<*p<<endl;
}