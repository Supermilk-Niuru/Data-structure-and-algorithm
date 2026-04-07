//自定义数据类型必须自定义排序方式
#include<iostream>
#include<string>
#include<set>
using namespace std;
//自定义数据
class Student
{
    public:
    int age;
    string name;
    Student(int age,string name)
    {
        this->age = age;
        this->name = name;
    }
};
//仿函数规定排序规则
class Studentcompare
{
    public:
    bool operator()(const Student &A,const Student &B) const//一定要加上const 否则会出现warning 因为编译器认可只读的方式
    {
        return A.age>B.age;
    }
};
void Printset(set<Student,Studentcompare>&m);
int main()
{
    set<Student,Studentcompare> m;
    Student p1(1,"haha");
    Student p2(8,"ah");
    Student p3(80,"als");//如果p3.age=8 由于比较的是年龄 而set不允许重复数据的插入 故不会被放进去
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    Printset(m);
}
void Printset(set<Student,Studentcompare>&m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<it->age<<" "<<it->name<<" ";
    }
    cout<<endl;
}