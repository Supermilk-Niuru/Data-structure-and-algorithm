#include<iostream>
#include<string>
using namespace std;
int main()
{
    //直接构造
    string s1 = "hello";
    cout<<s1<<endl;
    //使用某一字符串初始化
    const char *str = "hello";//从c++11开始，为了避免修改，必须使用const指针，而不是普通指针
    string s2(str);
    cout<<s2<<endl;
    //使用其他字符串初始化
    string s3(s2);
    cout<<s3<<endl;
    //使用多个字符
    string s4(10,'c');
    cout<<s4<<endl;
}
