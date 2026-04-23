#include<iostream>
using namespace std;
struct Listnode
{
    int data;
    Listnode *next;
};
void merge_Listnode(Listnode *&ha,int ha_length,Listnode *&hb,int hb_length);
void Print_Listnode(Listnode *h);
int main()
{
    Listnode *ha = new Listnode;
    Listnode *hb = new Listnode;
    int i;
    Listnode *p = ha;
    Listnode *q = hb;
    for(i=0;i<10;i++)
    {
        Listnode *newnode_a = new Listnode;
        newnode_a->data = (i+1);
        newnode_a->next = nullptr;
        p->next = newnode_a;
        p = newnode_a;
        Listnode *newnode_b = new Listnode;
        newnode_b->data = (i+1)*10;
        newnode_b->next = nullptr;
        q->next = newnode_b;
        q = newnode_b;
    }
    Print_Listnode(ha);
    Print_Listnode(hb);
    merge_Listnode(ha,10,hb,10);
}
void merge_Listnode(Listnode *&ha,int ha_length,Listnode *&hb,int hb_length)
{
    Listnode *hc = nullptr;
    if(ha_length<=hb_length)
    {
        Listnode *p = ha;
        while(p->next!=nullptr)
        {
            p = p->next;
        }
        p->next = hb->next;
        hc = ha;
    }
    else
    {
        Listnode *p = hb;
        while(p->next!=nullptr)
        {
            p = p->next;
        }
        p->next = ha->next;
        hc = hb;
    }
    Print_Listnode(hc);
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