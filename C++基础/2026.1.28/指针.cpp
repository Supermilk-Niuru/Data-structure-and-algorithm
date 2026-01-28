#include<iostream>
using namespace std;
int main()
{
    int *p;
    cout<<sizeof(*p)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(int *)<<endl;
    cout<<sizeof(double *)<<endl;
}