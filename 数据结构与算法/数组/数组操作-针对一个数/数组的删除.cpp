#include<iostream>
#include<string>
using namespace std;
#define num 5

void deleted(int *arr,int target,int size);
int find(int *arr,int target,int size);
void printarr(int *arr,int size);
int main()
{
    int arr[num]={3,5,6,9,10};
    deleted(arr,num,num);
    printarr(arr,num-1);
    
}
void deleted(int *arr,int target,int size)
{
    int i;
    int index = find(arr,target,size);
    for(i=index+1;i<size;i++)
    {
        arr[i-1] = arr[i];
    }
}
int find(int *arr,int target,int size)
{
    int i,m;
    for(i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            m = i;
            break;
        }
    }
    return m;
}
void printarr(int *arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
