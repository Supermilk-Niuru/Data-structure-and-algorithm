/*
list 插入 删除
插入：头插 push_front 尾插 push_back 指定位置插 insert
删除：头删 pop_front 尾删 pop_back 指定位置删 erase 删除指定值全部 remove 全删 clear
*/
#include<iostream>
#include<list>
using namespace std;
void printlist(const list<int> &m);
int main()
{
    list<int> m1;
    list<int> m2;
    list<int> m3;
    //尾插
    m1.push_back(10);
    m1.push_back(20);
    m1.push_back(30);
    //头插
    m1.push_front(30);
    m1.push_front(40);
    m2 = m1;//list中没有m2.assign(m1);但可以写成m2.assign(m1.begin(),m1.end());
    m3.assign(m1.begin(),m1.end());
    printlist(m1);
    //头删
    m1.pop_front();
    printlist(m1);
    //尾删
    m1.pop_back();
    printlist(m1);

    //删指定位置 list的底层（双向链表）决定了必须传迭代器
    m2.erase(m2.begin());//返回值是下一个数据的位置，本处没有记录
    printlist(m2);
    //删除全部指定元素
    m2.remove(30);
    printlist(m2);
    //全删
    m2.clear();
    printlist(m2);
    //指定位置插入
    m3.insert(m3.begin(),1);//其实它的返回值是一个迭代器，本处并没有记录，编译器自动将它扔掉了
    printlist(m3);
    //插入n个相同数据
    m3.insert(m3.begin(),10,1);//无返回值 在第一个之前插入10个1
    printlist(m3);
    //将两个位置之间的数据插入到指定位置
    //auto it = find(m3.begin(),m3.end(),30);
    m3.insert(m3.begin(),find(m3.begin(),m3.end(),30),m3.end());
    printlist(m3);
}
void printlist(const list<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}