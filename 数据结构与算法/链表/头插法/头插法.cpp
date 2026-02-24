/*
头插法
创建链表 数据 头指针 
每一次插入的数据 next指向head
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
    Listnode *head = new Listnode;
    Listnode *middle = new Listnode;
    Listnode *last = new Listnode;
    head->data = 10;
    head->next = middle;
    middle->data = 20;
    middle->next = last;
    last->data = 30;
    last->next = NULL;
    Listnode *newnode = new Listnode;
    //Listnode *temp = new Listnode;
    Listnode *temp;
    newnode->data = 100;
    newnode->next = head;
    head = newnode;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        cout<<temp->data<<" ";
    }
    cout<<endl;
}