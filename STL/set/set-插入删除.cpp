#include<iostream>
#include<set>
using namespace std;
void Printset(set<int> &m);
int main()
{
    set<int> m1;
    m1.insert(20);
    m1.insert(10);
    m1.insert(60);
    m1.insert(40);
    m1.insert(20);
    Printset(m1);
    //删除
    m1.erase(m1.begin());//自动排序之后 删除的第一个元素一定是10
    m1.erase(60);
    Printset(m1);
    //清空
    m1.clear();
    Printset(m1);
}
void Printset(set<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";

    }
    cout<<endl;
}