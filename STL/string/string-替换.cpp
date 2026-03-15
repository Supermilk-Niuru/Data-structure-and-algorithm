/*
字符串的替换 replace(替换的起始位置，替换元素的个数，替换的字符串)
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1 = "ahhhhsjlj";
    str1.replace(2,3,"love999");
    cout<<str1<<endl;
}