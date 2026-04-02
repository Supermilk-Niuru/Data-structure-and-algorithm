/*
stack 先进后出，后进先出的一种数据结构。栈顶 栈底
这种数据结构不可以被遍历，可以判断是否为空
*/
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> m;
    //入栈
    m.push(10);
    m.push(20);
    m.push(30);
    m.push(40);
    stack<int> m1(m);//拷贝构造
    //查看栈顶元素
    cout<<m.top()<<endl;
    //出栈，移除栈顶元素
    m.pop();
    cout<<m.top()<<endl;
    //判断是否为空
    while(!m.empty())
    {
        cout<<m.top()<<" ";
        m.pop();
    }
    cout<<endl;
    
    while(!m1.empty())
    {
        cout<<m1.top()<<" ";
        m1.pop();
    }
    cout<<endl;

}