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
    Linklist *L1 = new Linklist;
    L1 = createlist(m1);
    Printlist(L1);
    Linklist *L2 = new Linklist;
    L2 = createlist(m2);
    Printlist(L2);
    Union(L1,L2);
}
Linklist *createlist(vector<int> &m1)
{
    //使用尾插法，按照用原来的顺序输出,使用循环链表
    Linklist *L = new Linklist;
    Linklist *tail = new Linklist;
    tail->next = L;
    Linklist *r = L;
    int size = m1.size();
    int i;
    for(i=0;i<size;i++)
    {
        Linklist *newnode = new Linklist;
        newnode->data = m1.at(i);
        newnode->next = tail;
        r->next = newnode;
        r = newnode;
    }
    r->next = L;
    return L;

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

void Union(Linklist *&m1,Linklist *&m2)//直接传尾指针进来
{
    //合并的时候相同元素要去掉,并且仍然要保持有序的状态
    Linklist *p = m1->next->next;
    Linklist *q = m2->next->next;
    Linklist *r = m1->next;
    Linklist *m = p;
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
        else
        {
            r->next = p;
            r = p;
            p = p->next;
            q = q->next;
        }
    }
    if(p==m1 && q!=m2)
    {
        r->next = q;
        q = m2;
        m2->next = m1;
        m2 = m1;
    }
    else
    {
        r->next = p;
    }
    delete q;
    Printlist(m);
    
}