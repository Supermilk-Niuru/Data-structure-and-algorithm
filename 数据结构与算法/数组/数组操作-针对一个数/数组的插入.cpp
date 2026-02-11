#include<iostream>
using namespace std;
#define num 6
void expand(int *arr,int target,int index,int size);
void printarr(int *arr,int size);
int main()
{
    int arr[num]={1,3,5,8,9};
    int size = sizeof(arr)/sizeof(int);
    expand(arr,4,3,size);
    printarr(arr,size);
}
void expand(int *arr,int target,int index,int size)
{
    int i;
    for(i=num-1;i>index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=target;
}
void printarr(int *arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}