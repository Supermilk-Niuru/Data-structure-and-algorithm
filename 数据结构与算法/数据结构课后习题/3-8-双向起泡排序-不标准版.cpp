/*
编写一个双向起泡排序的算法，即相邻两遍分别向相反方向起泡
*/
#include<iostream>
using namespace std;
void Dububblesort(vector<int> &m);
void PrintDubblesort(vector<int> &m);
int main()
{
    vector<int> m = {5,3,9,8,2,1,4};
    Dububblesort(m);
    PrintDubblesort(m);
}
void Dububblesort(vector<int> &m)
{
    int size = m.size();
    int i,j;
    for(i=0;i<size;i++)
    {
        bool ok = true;
        for(j=1;j<size-i-1;j++)
        {
            
            if(m.at(j-1)>m.at(j))
            {
                int temp = m.at(j);
                m.at(j) = m.at(j-1);
                m.at(j-1) = temp;
                ok = false;
            }
        }//for
        PrintDubblesort(m);
        for(j=size-1-i;j>i;j--)
        {
            if(m.at(j)<m.at(j-1))
            {
                int temp = m.at(j);
                m.at(j) = m.at(j-1);
                m.at(j-1) = temp;
                ok = false;
            }
        }//for
        PrintDubblesort(m);
        if(ok)
        {
            break;
        }
    }//for
   
}//Dububblesort
void PrintDubblesort(vector<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";
    }//for
    cout<<endl;
}//PrintDubblesort