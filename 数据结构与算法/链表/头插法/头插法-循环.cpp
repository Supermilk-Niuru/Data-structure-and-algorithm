#include<iostream>
using namespace std;
struct Listnode
{
    int data;
    Listnode *next;
};
int main()
{
    int i;
    int n;
    cin>>n;
    //Listnode *head = new Listnode;
    Listnode *head;
    //head->data = -1;
    //head->next = NULL;
    head = NULL;//没有必要为头指针申请内存 它仅仅是一个搭桥的。
    for(i=0;i<n;i++)
    {
        Listnode *m = new Listnode;
        m->data = i * 10;
        m->next = head;
        head = m;
        //delete m;
    }
    Listnode *temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        cout<<temp->data<<" ";
    }
    cout<<endl;
}