/*
map查找之后的返回值是迭代器
*/
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
    auto it = m1.find(3);
    cout<<it->second<<endl;
    cout<<m1.count(1)<<endl;//map 统计值只可能是0或者1
    multimap<int,int> m2;
    m2.insert(pair<int,int>(3,2));
    m2.insert(pair<int,int>(3,1));
    cout<<m2.count(3)<<endl;

}
void Printmap(map<int,int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<it->second<<" ";
    }
    cout<<endl;
}