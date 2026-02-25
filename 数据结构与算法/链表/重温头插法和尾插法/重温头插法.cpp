#include<iostream>
using namespace std;
struct Listnode
{
    int data;
    Listnode *next;
};
int main()
{
    Listnode *head = NULL;
    int i;
    for(i=0;i<10;i++)
    {
        Listnode *newnode = new Listnode;
        newnode->data = (i+1)*10;
        newnode->next = head;
        head = newnode;
    }
    Listnode *temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        cout<<temp->data<<" ";
    }
    cout<<endl;
}
