#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//容器 迭代器
//创建一个容器
void arr()
{
    //往容器中插入数据
    vector<int>m;
    m.push_back(10);
    //使用 vector 迭代器（本处相当于指针）找数据
    vector<int>::iterator Begin = m.begin();
    vector<int>::iterator End = m.end();//指向最后一个元素的下一个位置
    //遍历
    while(Begin!=End)
    {
        cout<<*Begin<<" ";
        Begin++;
    }
    cout<<endl;
}
int main()
{
    arr();
}