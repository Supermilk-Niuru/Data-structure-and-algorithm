#include<iostream>
#include<vector>
using namespace std;
void arr()
{
    vector<int>m;
    m.push_back(10);
    for(vector<int>::iterator it= m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    arr();
}