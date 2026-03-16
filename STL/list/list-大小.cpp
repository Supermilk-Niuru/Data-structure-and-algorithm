/*
list 判断是否为空 empty 修改它的大小 resize 改大还是该小
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
    if(m1.empty())
    {
        cout<<"kong"<<endl;
    }
    else
    {
        cout<<"feikong"<<endl;
        //cout<<m1.size()<<endl;
    }
    m1.resize(2);
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