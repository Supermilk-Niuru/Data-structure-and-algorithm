#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Myprint(int val)
{
    cout<<val<<" ";
}
void arr()
{
    vector<int>m;
    m.push_back(10);
    for_each(m.begin(),m.end(),Myprint);//回调函数的应用，相当于每次从容器中拿一个数，临时拷贝。如果需要修改容器中的值，则需要传递指针即 `int *val`
    cout<<endl;
}
int main()
{
    arr();
}