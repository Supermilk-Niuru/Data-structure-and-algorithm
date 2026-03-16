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
    list<int> m2;
    m2.assign(10,250);
    printlist(m1);
    printlist(m2);
    m1.swap(m2);
    printlist(m1);
    printlist(m2);

}
void printlist(const list<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}