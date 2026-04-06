#include<iostream>
#include<set>
using namespace std;
void Printset(set<int> &m);
int main()
{
    set<int> m1;
    m1.insert(10);
    m1.insert(20);
    m1.insert(60);
    m1.insert(40);
    m1.insert(20);
    set<int> m2;
    m2.insert(100);
    m2.insert(200);
    m2.insert(600);
    m2.insert(400);
    m2.insert(200);
    set<int> m3;
    cout<<m1.empty()<<" "<<m3.empty()<<endl;
    cout<<m1.size()<<endl;
    Printset(m1);
    Printset(m2);
    m1.swap(m2);
    Printset(m1);
    Printset(m2);
}
void Printset(set<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";

    }
    cout<<endl;
}
