#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int>m;
    //在容器中放入值
    m.push_back(10);
    m.push_back(200);
    //遍历容器中的数据 使用迭代器
    for(int val : m)
    {
        cout<<val<<" ";
    }
}