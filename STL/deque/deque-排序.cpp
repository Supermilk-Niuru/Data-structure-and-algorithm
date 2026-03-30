#include<iostream>
#include<deque>
using namespace std;
void Printdeque(deque<int> &m);
bool compare(int &n1,int &n2);
int main()
{
    deque<int> m1;
    int i;
    for(i=0;i<10;i++)
    {
        m1.push_back(i+1);
    }
    Printdeque(m1);
    for(i=0;i<10;i++)
    {
        m1.push_front(i+100);
    }
    sort(m1.begin(),m1.end());//sort 默认升序
    Printdeque(m1);
    //deque中没有sort成员函数
    //实现降序
    sort(m1.begin(),m1.end(),compare);
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
bool compare(int &n1,int &n2)//千万别写成 deque<int> &n1 因为我比较的是值，不是容器本身
{
    return n1>n2;
}