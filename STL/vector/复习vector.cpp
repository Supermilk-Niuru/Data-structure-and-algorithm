#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //创建一个名为m的容器
    vector<int>m;
    //在容器中放入值
    m.push_back(10);
    m.push_back(200);
    //遍历容器中的数据 使用迭代器
    vector<int>::iterator Begin = m.begin();
    vector<int>::iterator End = m.end();
    for(Begin;Begin!=End;Begin++)
    {
        cout<<*Begin<<" ";
    }
}
/*这种写法warning的原因是：编译器认为Begin重复定义了*/