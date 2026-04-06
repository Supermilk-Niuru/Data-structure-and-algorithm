#include<iostream>
#include<set>
using namespace std;
void Printset(set<int> &m);
void Printmultiset(multiset<int> &m);
int main()
{
    set<int> m1;
    m1.insert(10);
    //pair 对组 类似class 成对数据可以使用
    pair<string,int> p1("haha",9);
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<string,int> p2 = make_pair("haha",10);
    cout<<p2.first<<" "<<p2.second<<endl;
    
    pair<set<int>::iterator,bool> ret1 = m1.insert(10);//判断是否能够插入,为什么使用对组与insert的底层逻辑有关
    cout<<ret1.second<<endl;//bool的返回值为false 打印出来为0 表示没有插入成功
    //multiset可以插入重复值
    multiset<int> m2;
    m2.insert(20);
    //pair<multiset<int>::iterator,bool> ret2 = m2.insert(10);这行代码是错误的 因为multiset只返回迭代器 不返回bool
    m2.insert(20);
    m2.insert(10);
    Printmultiset(m2);
}
void Printset(set<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";

    }
    cout<<endl;
}
void Printmultiset(multiset<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";

    }
    cout<<endl;
}