#include<iostream>
#include<map>
using namespace std;
class Comparemap
{
    public:
    bool operator()(int v1,int v2) const//不要忘记了const
    {
        return v1>v2;
    }
};
void Printmap(map<int,int,Comparemap> &m);
int main()
{
    map<int,int,Comparemap> m1;
    m1.insert(pair<int,int>(1,2));
    m1.insert(pair<int,int>(3,1));
    m1.insert(pair<int,int>(2,4));
    m1.insert(pair<int,int>(4,3));
    Printmap(m1);
}
void Printmap(map<int,int,Comparemap> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<it->second<<" ";
    }
    cout<<endl;
}