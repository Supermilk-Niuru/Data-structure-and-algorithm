/*
字符串的查找 find（从左往右查找，返回值是对应的第一个下标） 和 rfind（从右往左查找，r就是right，返回值是对应的第一个下标）
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1 = "akshfak";
    int pos1 = str1.rfind("ak");
    int pos2 = str1.find("as");
    cout<<pos1<<endl;
    cout<<pos2<<endl;
}