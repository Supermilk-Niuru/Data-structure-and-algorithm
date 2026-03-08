#include<iostream>
#include<vector>
using namespace std;
struct person
{
    string name;
    int age;
};
int main()
{
    vector<person> m;
    person p1 = {"zhangsan",8};
    person p2 = {"lisi",9};
    person p3 = {"wangwu",10};
    //放入数据
    m.push_back(p1);
    m.push_back(p2);
    m.push_back(p3);
    //使用迭代器遍历数据
    for(vector<person>::iterator it=m.begin();it!=m.end();it++)
    {
        cout<<it->name<<" "<<it->age<<" ";
        cout<<endl;
    }
}
