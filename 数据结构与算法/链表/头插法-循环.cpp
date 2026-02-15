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
    Listnode *head = new Listnode;
    head->data = -1;
    head->next = NULL;
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