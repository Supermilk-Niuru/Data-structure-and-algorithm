#include<iostream>
#include<deque>
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
    deque<int> m2;
    m2 = m1;//这个操作与构造中得到类似结果的区别：这步操作涉及就内存的释放和新内存的申请。构造中是直接分配内存并且填充数值
    Printdeque(m2);
    deque<int> m3;
    m3.assign(m1.begin(),m1.end());
    Printdeque(m3);
    deque<int> m4;
    m4.assign(10,100);
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