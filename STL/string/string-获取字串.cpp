/*
获取字串 使用substr（起始位置，截取的个数），可以使用find 辅助一下
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1 = "Central China Normal University";
    int pos = str1.find('l');
    cout<<pos<<endl;
    string str2 = str1.substr(0,pos+1);
    cout<<str2<<endl;
}