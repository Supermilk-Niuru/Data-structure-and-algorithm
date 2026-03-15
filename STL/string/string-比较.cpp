/*
字符串的比较 本质是逐一比较ASCII码 大 返回值 大于0 等 返回值 0 小 返回值 小于0
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1 = "hahaha";
    string str2 = "hahaha";
    int judge = str1.compare(str2);
    cout<<judge<<endl;
}