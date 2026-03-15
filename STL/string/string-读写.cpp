/*
字符串的读写 读和改都可以用 at
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1 = "hello";
    int i;
    for(i=0;i<str1.size();i++)
    {
        cout<<str1[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<str1.size();i++)
    {
        cout<<str1.at(i)<<" ";
    }
    cout<<endl;
    str1[1]='w';
    str1.at(2)='q';
    for(i=0;i<str1.size();i++)
    {
        cout<<str1.at(i)<<" ";
    }
    cout<<endl;
}