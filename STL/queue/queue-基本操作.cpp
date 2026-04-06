#include<iostream>
#include<string>
#include<deque>
using namespace std;
class person
{
    public:
    int m_age;
    string m_name;
    person(int age,string name)
    {
        this->m_age = age;
        this->m_name = name;
    };
};
int main()
{
    //创建队列
    deque<person> m;
    //为队列准备数据
    person p1(4,"man1");
    person p2(5,"man2");
    person p3(6,"woman1");
    person p4(7,"woman2");
    //进入队列
    m.push_front(p1);
    m.push_back(p2);
    m.push_back(p3);
    m.push_back(p4);
    //查看队头队尾元素
    cout<<m.front().m_age<<" "<<m.front().m_name<<endl;
    cout<<m.back().m_age<<" "<<m.back().m_name<<endl;
    //出队
    m.pop_back();
    m.pop_front();
    cout<<m.front().m_age<<" "<<m.front().m_name<<endl;
    cout<<m.back().m_age<<" "<<m.back().m_name<<endl;
    cout<<m.size()<<endl;
    //查看队列是否为空
    cout<<m.empty()<<endl;

}