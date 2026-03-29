#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Printvector(vector <int> &m);
int main()
{
    vector<int> m1;
    m1.push_back(10);
    m1.push_back(20);
    m1.push_back(25);
    m1.push_back(30);
    Printvector(m1);
    vector<int> m2;
    int i;
    for(i=0;i<10;i++)
    {
        m2.push_back(i+1);
    }
    Printvector(m2);
    m1.swap(m2);
    Printvector(m1);
    Printvector(m2);
    //核心用途使用swap收缩空间
    vector<int> m3;
    for(i=0;i<10000;i++)
    {
        m3.push_back(i+1);
    }
    cout<<m3.capacity()<<endl;
    cout<<m3.size()<<endl;
    m3.resize(3);
    cout<<m3.capacity()<<endl;
    cout<<m3.size()<<endl;
    vector<int>(m3).swap(m3);//搞个替罪羊
    cout<<m3.capacity()<<endl;
    cout<<m3.size()<<endl;
}

void Printvector(vector<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
