/*
利用线性链表数据结构，模拟并实现两个整数集合的交集、并集和差集运算
S1={3,5,6,9,12,27,35} 和 S2={2,6,8,10,12,27,31,35,43,51,55,63}
*/
#include<iostream>
#include<vector>
using namespace std;
struct Linklist
{
    int data;
    Linklist *next;
};
//将给出的集合转化成链式存储
Linklist* createlist(vector<int> &m);
//两个整数集合的并集
void Union(Linklist *&m1,Linklist *&m2);
//两个整数集合的差集
void Difference(Linklist *&m1,Linklist *&m2);
//两个整数集合的交集
void Intersection(Linklist *&m1,Linklist *&m2);
//打印最后的结果
void Printlist(Linklist *&m);

int main()
{
    vector<int> m1 = {3,5,6,9,12,27,35};
    vector<int> m2 = {2,6,8,10,12,27,31,35,43,51,55,63};
    //Linklist *L1 = new Linklist;
    //L1 = createlist(m1); //两次new 会导致内存泄露
    Linklist *L1 = createlist(m1);
    Printlist(L1);
    //Linklist *L2 = new Linklist;
    //L2 = createlist(m2);
    Linklist *L2 = createlist(m2);
    Printlist(L2);
    //Union(L1,L2);
    Difference(L1,L2);
    //Intersection(L1,L2);
}
Linklist *createlist(vector<int> &m)
{
    //使用尾插法，按照用原来的顺序输出,使用带头指针的循环链表,
    Linklist *head = new Linklist;
    Linklist *r = head;
    int size = m.size();
    int i;
    for(i=0;i<size;i++)
    {
        Linklist *newnode = new Linklist;
        newnode->data = m.at(i);
        newnode->next = head;
        r->next = newnode;
        r = newnode;
    }
    r->next = head;
    return head;
}
void Printlist(Linklist *&m)
{
    Linklist *temp;
    for(temp = m->next;temp!=m;temp = temp->next)
    {
        cout<<temp->data<<" ";
    }
    cout<<endl;
}
//两个整数集合的并集
void Union(Linklist *&m1,Linklist *&m2)
{
    //合并的时候相同元素要去掉,并且仍然要保持有序的状态
    Linklist *p = m1->next;
    Linklist *q = m2->next;
    Linklist *r = m1;
    
    while(p!=m1 && q!=m2)
    {
        if(p->data > q->data)
        {
            r->next = q;
            r = q;
            q = q->next;
        }
        else if(p->data < q->data)
        {
            r->next = p;
            r = p;
            p = p->next;
        }
        else if(p->data == q->data)
        {
            r->next = p;
            r = p;
            p = p->next;
            q = q->next;
        }
    }
    if(p==m1)
    {
        r->next = q;
        while(q->next!=m2)
        {
            q = q->next;
        }
        q->next = m1;

    }
    else
    {
        r->next = p;
    }
    Printlist(m1);
}
//两个整数集合的差集
void Difference(Linklist *&m1,Linklist *&m2)
{
    Linklist *p = m1->next;
    Linklist *q = m2->next;
    Linklist *r = m1;
    while(p!=m1 && q!=m2)
    {
        if(p->data == q->data)
        {
            p = p->next;
            q = q->next;
        }
        else if(p->data>q->data)
        {
            r->next = q;
            r = q;
            q = q->next;
        }
        else
        {
            r->next = p;
            r = p;
            p = p->next;
        }
    }
    if(p==m1)
    {
        r->next = q;
        while(q->next!=m2)
        {
            q = q->next;
        }
        q->next = m1;
    }
    Printlist(m1);
}
//两个整数集合的交集
void Intersection(Linklist *&m1,Linklist *&m2)
{
    Linklist *p = m1->next;
    Linklist *q = m2->next;
    Linklist *r = m1;
    while(p!=m1 && q!=m2)
    {
        if(p->data == q->data)
        {
            r->next = p;
            r = p;
            p = p->next;
            q = q->next;
        }
        else
        {
            p = p->next;
            q = q->next;
        }
    }
    Printlist(m1);
}