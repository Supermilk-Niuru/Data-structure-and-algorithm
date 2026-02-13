#include<iostream>
using namespace std;
#define max 10
/*
expand 函数
* 传入 数组 目标值 增加的位置 之前数组的有效值的长度(使用指针 每增加一个 有效长度增加)
* 判断增添后容量是否够
* 开始增添：从后往前覆盖，移位，到目标位置停止
*/
bool expand(int *arr,int target,int index,int *psize);
void printarr(int *arr,int size);
int main()
{
    int arr[max]={2,3,6,78,90,1000};
    int currentsize = 6;
    if(expand(arr,99,3,&currentsize))
    {
        printarr(arr,currentsize);
    }
}
bool expand(int *arr,int target,int index,int *psize)
{
    int i;
    bool flag = true;
    if(*psize>=max)
    {
        flag = false;
        return flag;
    }
    for(i=*psize;i>index;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index] = target;
    (*psize)++;
    return flag;
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

