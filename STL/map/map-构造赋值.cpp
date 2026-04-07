/*
map容器 底层是二叉树实现
map里面存放的都是对组 一个是索引(key) 另外一个是真实数据
map和set类似 不可以插入重复数据
*/
#include<iostream>
#include<map>
using namespace std;
void Printmap(map<int,int> m);
int main()
{
    map<int,int> m1;
    m1.insert(pair<int,int>(1,2));
    m1.insert(pair<int,int>(3,1));
    m1.insert(pair<int,int>(2,4));
    m1.insert(pair<int,int>(4,3));
    Printmap(m1);
    //赋值
    map<int,int> m2(m1);
    Printmap(m2);
    map<int,int> m3;
    m3 = m2;
    Printmap(m3);

}
void Printmap(map<int,int> m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<it->second<<" ";
    }
    cout<<endl;
}