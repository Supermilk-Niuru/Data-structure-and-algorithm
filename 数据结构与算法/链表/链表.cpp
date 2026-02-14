/*
结构体 包含 变量 next指针
三个指针变量 head middle last 指针分别指向 middle last null
使用for循环输出对应的值 引入中间变量
*/
#include<iostream>
using namespace std;
struct Listnode
{
    int data;
    Listnode *next;
};
int main()
{
    //struct Listnode *head,*middle,*last;    声明之动态分配内存时再写就是重复定义
    Listnode *head = new Listnode;
    Listnode *middle = new Listnode;
    Listnode *last = new Listnode;
    head->data = 10;
    head->next = middle;
    middle->data = 20;
    middle->next = last;
    last->data = 30;
    last->next = NULL;
    Listnode *temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        cout<<temp->data<<" ";
    }
    cout<<endl;
}