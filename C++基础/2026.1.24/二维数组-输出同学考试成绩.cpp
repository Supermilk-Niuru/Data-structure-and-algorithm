#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={{80,90,100},{100,100,100},{85,95,22}};
    string str_name[3]={"zhang san","li si","wang wu"};
    string str_subject[3]={"Chinese","Mathmatics","English"};
    int i,j;
    for(i=0;i<=2;i++)
    {
        cout<<str_name[i]<<" ";
        int Marks=0;
        for(j=0;j<=2;j++)
        {
            cout<<str_subject[j]<<" "<<a[i][j]<<" ";
            Marks+=a[i][j];
        }
        cout<<"Marks:"<<Marks;
        cout<<endl;
    }
} 
