/*
list 反转
reverse
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
    printlist(m1);
    m1.reverse();
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