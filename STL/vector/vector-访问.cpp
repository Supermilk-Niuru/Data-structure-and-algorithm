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
    cout<<m1[1]<<endl;//直接用下标访问
    cout<<m1.at(1)<<endl;//用at访问
    cout<<m1.front()<<endl;//访问第一个元素
    cout<<m1.back()<<endl;//访问最后一个元素
}

void Printvector(vector<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
