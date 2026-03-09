#include<iostream>
#include<string>
using namespace std;
int main()
{
    /*
    使用operator赋值，“=”
    使用assign赋值 
    1.赋值n个字符
    2.赋值已知字符串前n个字符
    3.赋值已知字符串
    */
   string s1;
   s1 = "hello world";
   cout<<s1<<endl;
   string s2;
   s2.assign(s1);
   cout<<s2<<endl;
   
   string s3;
   s3.assign(s1,1);
   cout<<s3<<endl;
   string s4;
   s4.assign("hello world",1);
   cout<<s4<<endl;//对比s3 s4 的输出
   
   string s5;
   s5.assign(20,'a');
   cout<<s5<<endl;
}
/*
如果想要匹配前n个字符，那么字符串必须是C风格类型字符串。
如果是使用的是string ，则是截取赋值，从下标开始，一直到末尾。
*/