#include<iostream>
using namespace std;
/*
创建要插入的新节点，next=NULL
尾节点从头到尾遍历，直到发现NULL为止，此过程不断更新尾节点
找到NULL，更新尾节点指向新节点。
*/
struct Nodelist
{
    int data;
    struct Nodelist *next;
};
int main()
{
    Nodelist *head = NULL;
    int n = 10;
    int i;
    for(i=0;i<n;i++)
    {
        Nodelist *newnode = new Nodelist;
        newnode->data = i*10;
        newnode->next = NULL;
        Nodelist *lastnode = head;
        if(lastnode==NULL)
        {
            lastnode = newnode;
        }
        else
        {
            while(lastnode!=NULL)
            {
                lastnode = lastnode->next;
            }
            lastnode = newnode;
        }
    }
    Nodelist *temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        cout<<temp->data<<" ";
    }
    cout<<endl;
}