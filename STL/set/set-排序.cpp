// set默认是从小到大排序 如果我们想让它从大到小排 需要在它插入数据之前使用仿函数规定排序规则
#include<iostream>
#include<set>
using namespace std;
class Mycompare
{
    public:
    bool operator()(int v1,int v2) const//C++标准容器要求：仿函数必须是只读的，否则会出现warning。注意和list容器直接写bool compare的区别。仿函数就是一个重载的功能。
    {
        return v1>v2;
    }
};
void Printset(const set<int,Mycompare> &m);
int main()
{
    set<int,Mycompare> m1;
    m1.insert(100);
    m1.insert(900);
    m1.insert(200);
    Printset(m1);
}
void Printset(const set<int,Mycompare> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}