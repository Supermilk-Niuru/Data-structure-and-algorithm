#include<iostream>
#include<map>
using namespace std;
void Printmap(map<int,int> &m);
int main()
{
    map<int,int> m1;
    m1.insert(pair<int,int>(1,2));
    m1.insert(pair<int,int>(3,1));
    m1.insert(pair<int,int>(2,4));
    m1.insert(pair<int,int>(4,3));
    Printmap(m1);
    map<int,int> m2;
    m2.insert(pair<int,int>(10,20));
    m2.insert(pair<int,int>(30,40));
    m2.insert(pair<int,int>(20,79));
    m2.insert(pair<int,int>(40,67));
    Printmap(m2);
    cout<<m1.size()<<endl;
    cout<<m2.empty()<<endl;

    m1.swap(m2);
    Printmap(m1);
    Printmap(m2);
}
void Printmap(map<int,int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<it->second<<" ";
    }
    cout<<endl;
}