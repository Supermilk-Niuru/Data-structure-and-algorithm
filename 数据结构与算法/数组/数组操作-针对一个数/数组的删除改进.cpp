#include<iostream>
using namespace std;
// find delete print
int find(int *arr,int target,int size);
bool deletenum(int *arr,int target,int *size);
void printarr(int *arr,int size);
int main()
{
    int arr[]={3,5,6,98,99,10000};
    int size = sizeof(arr)/sizeof(int);
    deletenum(arr,98,&size);
    printarr(arr,size);
}
/*
find 函数 
1 传入 数组 目标 长度
2 判断有没有目标 有就返回下标 没有返回-1
*/
int find(int *arr,int target,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return i;
            //break;
        }
    }
    return -1;
}
/*
delete 函数
1 传入 数组 目标 长度
2 调用find函数判断
3 如果有 直接从下标开始往前覆盖
*/
bool deletenum(int *arr,int target,int *size)
{
    int judge = find(arr,target,*size);
    if(judge==-1)
    {
        return false;
    }
    int i;
    for(i=judge+1;i<*size;i++)
    {
        arr[i-1]=arr[i];
    }
    (*size)--;
    return true;
}
/*
printarr函数
接受变化的size
*/
void printarr(int *arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
