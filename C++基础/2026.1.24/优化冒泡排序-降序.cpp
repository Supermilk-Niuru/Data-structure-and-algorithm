#include<iostream>
#define num 10
using namespace std;
int main()
{
    int a[num] = {1,3,4,6,8,9,10,7,2,5};
    int i,j;
    for(i=0;i<num;i++)
    {
        bool flag = false;//先假设已经排好了，flag的false或者true就是表示是否发生了交换。
        for(j=0;j<num-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                int k;
                k = a[j];
                a[j]=a[j+1];
                a[j+1]=k;
                flag = true;
            }
        }
        if(!flag)
        {
            break;
        }
    }
    for(i=0;i<num;i++)
    {
        cout<<a[i]<<" ";
    }
}

