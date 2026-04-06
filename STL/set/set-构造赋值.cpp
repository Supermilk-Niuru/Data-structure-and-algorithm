/*set容器底层是二叉树，不允许插入重复的值，插入后自动排序*/
#include<iostream>
#include<set>
using namespace std;
void Printset(set<int> &m);
int main()
{
    set<int> m1;
    m1.insert(10);
    m1.insert(20);
    m1.insert(60);
    m1.insert(40);
    m1.insert(20);
    Printset(m1);
    set<int> m2(m1);
    Printset(m2);
    set<int> m3;
    m3 = m2;
    Printset(m3);
}
void Printset(set<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";

    }
    cout<<endl;
}
