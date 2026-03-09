#include<iostream>
#include<vector>
using namespace std;
/* 
1.创建两个容器
2.小容器中放入数据
3.大容器中放入小容器
4.遍历输出
*/
int main()
{
    vector<int> m1;
    vector<int> m2;
    m1.push_back(10);
    m2.push_back(20);
    //创建大容器
    vector<vector<int>> n;
    n.push_back(m1);
    n.push_back(m2);
    //遍历 外层大容器 内层小容器
    for(auto vit = n.begin();vit!=n.end();vit++)
    {
        for(auto it = (*vit).begin();it!=(*vit).end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}