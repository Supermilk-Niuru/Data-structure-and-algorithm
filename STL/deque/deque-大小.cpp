#include<iostream>
#include<deque>//无capacity
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
    Printdeque(m1);
    cout<<m1.empty()<<endl;
    cout<<m1.size()<<endl;
    m1.resize(3);
    Printdeque(m1);
    m1.resize(18,8);
    Printdeque(m1);
}
void Printdeque(deque<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}