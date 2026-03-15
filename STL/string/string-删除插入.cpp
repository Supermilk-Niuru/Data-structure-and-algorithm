/*
字符串的插入 删除 insert(插入的位置，插入的字符) erase(插入的位置，插入的字符)
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1 = "love";
    str1.insert(1,"ove l");
    cout<<str1<<endl;
    str1.erase(1,5);
    cout<<str1<<endl;
}