/*
排序 list迭代器不支持随机访问 所有不支持随机访问的容器都不可以使用标准算法 它有自己的内部对应算法
升序（默认升序），降序(造一个bool)
*/
#include<iostream>
#include<list>
using namespace std;
void printlist(const list<int> &m);
bool compare(int v1,int v2);
int main()
{
    list<int> m1;
    m1.push_back(20);
    m1.push_back(10);
    m1.push_back(90);
    //sort(m1.begin(),m1.end());
    m1.sort(compare);
    printlist(m1);
}
void printlist(const list<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
bool compare(int v1,int v2)
{
    return v1>v2;
}