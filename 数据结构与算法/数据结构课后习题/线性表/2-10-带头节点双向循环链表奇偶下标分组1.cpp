#include<iostream>
using namespace std;
struct Dulistnode
{
    int data;
    Dulistnode *pre;
    Dulistnode *next;
};
void Dulistnode_resort(Dulistnode *&A);
void PrintDulistnode(Dulistnode *&A);
int main()
{
    Dulistnode *A = new Dulistnode;
    A->next = A;
    A->pre = A;
    Dulistnode *r = A;
    int i;
    for(i=0;i<10;i++)
    {
        Dulistnode *newnode = new Dulistnode;
        newnode->data = i+1;
        newnode->next = A;
        newnode->pre = r;
        r->next = newnode;
        r = newnode;
    }
    PrintDulistnode(A);
    Dulistnode_resort(A);
    PrintDulistnode(A);
}
void Dulistnode_resort(Dulistnode *&A)
{
    Dulistnode *r = A->next;
    Dulistnode *Duhead = new Dulistnode;
    //初始化哨兵
    Duhead->next = Duhead;
    Duhead->pre = Duhead;
    
    Dulistnode *Dutail = Duhead;
    while(r->next!=A)
    {
        Dulistnode *p = r->next;
        r->next = p->next;
        p->next->pre = r;
        
        p->next = Dutail;
        Dutail->pre = p;
        Duhead->next = p;
        p->pre = Dutail;
        Dutail = p;
        
        r = r->next;
        if(r==A)
        {
            break;
        }
    }
    if(Duhead->next != Duhead)
    {
        Dulistnode *a = A->pre;
        //Dulistnode *b = A->next;
        Dulistnode *c = Duhead->pre;
        Dulistnode *d = Duhead->next;
        a->next = d;
        d->pre = a;
        c->next = A;
        A->pre = c;
    }
    delete Duhead;
}
void PrintDulistnode(Dulistnode *&A)
{
    Dulistnode *temp = A->next;
    while(temp!=A)
    {
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;
}