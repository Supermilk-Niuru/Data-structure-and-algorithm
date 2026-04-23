#include<iostream>
using namespace std;
struct Listnode
{
    int data;
    Listnode *next;
};
void delete_elem(int mink,int maxk,Listnode *&A);
void Print_Listnode(Listnode *h);
int main()
{
    Listnode *ha = new Listnode;
    int i;
    Listnode *p = ha;
    for(i=0;i<10;i++)
    {
        Listnode *newnode_a = new Listnode;
        newnode_a->data = (i+1);
        newnode_a->next = nullptr;
        p->next = newnode_a;
        p = newnode_a;
    }
    Print_Listnode(ha);
    delete_elem(2,6,ha);
    Print_Listnode(ha);
}
void delete_elem(int mink,int maxk,Listnode *&A)
{
    Listnode *pre = A;
    Listnode *r = A->next;
    while(r!=nullptr)
    {
        if(r->data>mink && r->data<maxk)
        {
            Listnode *del = r;
            pre->next = r->next;
            r = r->next;
            delete del;
        }
        else
        {
            pre = r;
            r = r->next;
        }
    }
}
void Print_Listnode(Listnode *h)
{
    Listnode *temp = h->next;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}