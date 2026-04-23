#include<iostream>
using namespace std;
struct DuListnode
{
    int data;
    DuListnode *prev;
    DuListnode *next;
};
void DuListnode_resort(DuListnode *&A);
void DuListnode_resort(DuListnode *&A)
{
    DuListnode *r = A->next;
    DuListnode *p;
    DuListnode *B = new DuListnode;
    while(r!=nullptr)
    {
        p = r->next;
        r->next = p->next;
        r = p->next;
        r->prev = p->prev;
        DuListnode *q = p;
        if(B->next!=nullptr)
        {
            p->next = B->next;
            p->prev = B;
            B->next->prev = p;
        }
        else
        {
            B->next = p;
            p->prev = B;
        }
    }
    r->next = B->next;
    B->next->prev = r;
}