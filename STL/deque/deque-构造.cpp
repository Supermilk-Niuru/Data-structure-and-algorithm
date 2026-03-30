#include<iostream>
#include<deque>//支持随机访问，对头部插入删除比vector快
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
    deque<int> m2(m1);
    Printdeque(m2);
    deque<int> m3(m1.begin(),m1.end());
    Printdeque(m3);
    deque<int> m4(10,10000);
    Printdeque(m4);
}
void Printdeque(deque<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}