#include<iostream>
#include<vector>
using namespace std;
void Printdeque(deque<int> &m);
int main()
{
    deque<int> m1;
    int i;
    for(i=0;i<10;i++)
    {
        m1.push_back(i+1);
    }
    //使用下标或者at访问
    for(i=0;i<10;i++)
    {
        cout<<m1[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<10;i++)
    {
        cout<<m1.at(i)<<" ";
    }
    cout<<endl;
    //使用front back访问第一个和最后一个
    cout<<m1.front()<<endl;
    cout<<m1.back()<<endl;
}



void Printdeque(deque<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";

    }
    cout<<endl;
}