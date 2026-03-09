#include<iostream>
#include<string>
using namespace std;
/*
直接添加
使用追加 append
1.添加到末尾
2.前n个字符添加到末尾
3.从第m个字符开始添加n个字符到末尾
*/
int main()
{
    string s1 = "hello";
    s1 += " world";
    cout<<s1<<endl;
    s1.append(" world");
    cout<<s1<<endl;
    
    string s2 = "nihao";
    string s3 = "nihao";
    string s4 = "haha";
    s2.append(s4,1);
    cout<<s2<<endl;
    s3.append("haha",1);
    cout<<s3<<endl;//注意对比s2,s3的输出，原因和赋值中出现类似情况的是一样的

    string s5 = "nihao";
    s5.append(s4,0,2);
    cout<<s5<<endl;
}