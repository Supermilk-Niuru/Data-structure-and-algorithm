#include<iostream>
#include<vector>
using namespace std;
void Printvector(vector<int> &m);
int main()
{
    vector<int> m1;
    int i;
    for(i=0;i<10;i++)
    {
        m1.push_back(i+1);
    }
    cout<<m1.empty()<<endl;//容器为空返回值是1，不为空，返回值是0
    cout<<m1.capacity()<<endl;
    cout<<m1.size()<<endl;
    Printvector(m1);
    m1.resize(12);
    Printvector(m1);
    m1.resize(5);//resize之后容量是不改变的
    Printvector(m1);
}
void Printvector(vector<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
