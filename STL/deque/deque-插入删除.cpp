#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
//头插 尾插 插入区间 删除区间 删除指定位置 头删 尾删 清空
void Printdeque(deque<int> &m);
int main()
{
    deque<int> m1;
    int i;
    //尾插
    for(i=0;i<10;i++)
    {
        m1.push_back(i+1);
    }
    Printdeque(m1);
    //头插
    for(i=0;i<10;i++)
    {
        m1.push_front(i+100);
    }
    //sort(m1.begin(),m1.end());
    Printdeque(m1);

    //插入指定位置
    m1.insert(m1.begin(),1);
    Printdeque(m1);
    //插入区间
    m1.insert(m1.begin(),find(m1.begin(),m1.end(),10),m1.end());
    Printdeque(m1);
    //尾删
    m1.pop_back();
    Printdeque(m1);
    //头删
    m1.pop_front();
    Printdeque(m1);
    //删区间
    m1.erase(find(m1.begin(),m1.end(),8),m1.end());
    Printdeque(m1);
    //清空
    m1.clear();
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