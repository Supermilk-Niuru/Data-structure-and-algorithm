/*
list容器 直接 拷贝 区间 n个元素
*/
#include<iostream>
#include<list>
using namespace std;
void printlist(const list<int> &m);
int main()
{
    //直接构造
    list<int> m1;
    m1.push_back(10);
    m1.push_back(20);
    m1.push_back(30);
    printlist(m1);
    //区间
    list<int> m2(m1.begin(),m1.end());
    printlist(m2);
    //拷贝
    list<int> m3(m1);
    printlist(m3);
    //多个元素
    list<string> m4(10,"la");
    for(auto it = m4.begin();it!=m4.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void printlist(const list<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
