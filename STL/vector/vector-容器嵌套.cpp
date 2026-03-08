#include<iostream>
#include<vector>
using namespace std;
/*
1.创建两个容器
2.在容器中存入数据，大容器中的数据是小容器
3.遍历容器
*/
struct person
{
    string name;
    int age;
};
int main()
{
    //创建小容器，然后存入数据
    vector<person> man;
    person pm1 = {"zhangsan",8};
    person pm2 = {"lisi",9};
    person pm3 = {"wangwu",10};
    man.push_back(pm1);
    man.push_back(pm2);
    man.push_back(pm3);
    vector<person> woman;
    person pw1 = {"hongmei",5};
    person pw2 = {"haha",9};
    woman.push_back(pw1);
    woman.push_back(pw2);
    //创建大容器，存入小容器
    vector<vector<person>> n;
    n.push_back(man);
    n.push_back(woman);
    //遍历
    for(vector<vector<person>>::iterator vit=n.begin();vit!=n.end();vit++)
    {
        for(vector<person>::iterator it=(*vit).begin();it!=(*vit).end();it++)
        {
            cout<<it->age<<" "<<it->name<<" "<<endl;
            
        }
    }
}