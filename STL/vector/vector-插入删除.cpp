#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Printvector(vector <int> &m);
int main()
{
    vector<int> m1;
    //尾插
    m1.push_back(10);
    m1.push_back(20);
    m1.push_back(25);
    m1.push_back(30);
    Printvector(m1);
    //尾删
    m1.pop_back();
    Printvector(m1);
    //在指定位置插入,位置必须是迭代器
    m1.insert(m1.begin(),2);
    Printvector(m1);
    m1.insert(find(m1.begin(),m1.end(),10),2,1);//使用find 必须引入算法头文件<algorithm> find返回的是迭代器 at返回的是引用
    Printvector(m1);
    m1.insert(m1.end()-1,5);//如果想要在某个位置插入，直接将迭代器加减就可以了，begin的索引是从0开始的
    Printvector(m1);
    //删除
    m1.erase(m1.begin());
    Printvector(m1);
    m1.erase(find(m1.begin(),m1.end(),5));//删除指定值
    Printvector(m1);
    m1.erase(remove(m1.begin(),m1.end(),1),m1.end());//删除指定值的所有值
    Printvector(m1);
    //清空
    m1.clear();
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
