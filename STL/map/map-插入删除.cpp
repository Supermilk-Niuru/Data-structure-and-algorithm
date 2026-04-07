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
    //删除
    m1.erase(m1.begin());
    Printmap(m1);
    //清空
    m1.clear();
    Printmap(m1);
}
void Printmap(map<int,int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<it->second<<" ";
    }
    cout<<endl;
}