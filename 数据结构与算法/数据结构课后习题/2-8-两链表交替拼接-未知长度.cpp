#include<iostream>
using namespace std;
struct Listnode
{
    int data;
    Listnode *next;
};
int count_Listnode(Listnode *&m);
void alternatemerge_Listnode(Listnode *&ha,int ha_length,Listnode *&hb,int hb_length);
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
        
    }
    for(i=0;i<11;i++)
    {
        Listnode *newnode_b = new Listnode;
        newnode_b->data = (i+1)*10;
        newnode_b->next = nullptr;
        q->next = newnode_b;
        q = newnode_b;
    }
    Print_Listnode(ha);
    Print_Listnode(hb);
    int ha_length = count_Listnode(ha);
    int hb_length = count_Listnode(hb);
    alternatemerge_Listnode(ha,ha_length,hb,hb_length);
}
void alternatemerge_Listnode(Listnode *&ha,int ha_length,Listnode *&hb,int hb_length)
{
    Listnode *hc;
    Listnode *p = ha->next;
    Listnode *q = hb->next;
    Listnode *r = hc;
    if(ha_length <= hb_length)
    {
        hc = ha;
        r = ha;
        //本处：while的逻辑有一个极其错误的写法，见markdown文档
       while(p!=nullptr)
        {
            Listnode *ta = p->next;
            Listnode *tb = q->next;
            r->next = p;
            r = p;
            r->next = q;
            r = q;
            p = ta;
            q = tb;
        }
        if(ha_length!=hb_length)
        {
            while(q!=nullptr)
            {
                r->next = q;
                r = q;
                q = q->next;
            }
        }
        Print_Listnode(hc);
    }
    else
    {
        hc = hb;
        r = hb;
        while(q!=nullptr)
        {
            Listnode *ta = p->next;
            Listnode *tb = q->next;
            r->next = q;
            r = q;
            r->next = p;
            r = p;
            p = ta;
            q = tb;
        }
        if(ha_length!=hb_length)
        {
            while(p!=nullptr)
            {
                r->next = p;
                r = p;
                p = p->next;
            }
        }
        Print_Listnode(hc);
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
int count_Listnode(Listnode *&m)
{
    Listnode *p = m->next;//不要把头节点算进去
    int length_m = 0;
    while(p!=nullptr)
    {
        length_m++;
        p = p->next;
    }
    return length_m;
}