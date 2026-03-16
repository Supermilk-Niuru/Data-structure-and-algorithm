/*
list 存取 不可以用 at 和 [] 迭代器是双向的，不可以随机访问!!!!!!! 不可以跳跃访问
*/
#include<iostream>
#include<list>
using namespace std;
void printlist(const list<int> &m);
int main()
{
    list<int> m1;
    m1.push_back(10);
    m1.push_back(20);
    m1.push_back(30);
    m1.push_back(40);
    int pos_back = m1.back();
    int pos_front = m1.front();
    cout<<pos_back<<endl;
    cout<<pos_front<<endl;
}
