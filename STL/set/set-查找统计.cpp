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
    //查找
    auto it = m1.find(100);//查找函数返回值是一个迭代器 找不到返回值是m.end()
    cout<<*it<<endl;
    //统计
    int num = m1.count(10);//在set容器 count返回值只可能是0或者1 因为不允许有重复元素的存在
    cout<<num<<endl;

}
void Printset(set<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";

    }
    cout<<endl;
}