//实现顺序表的原地逆置
#include<iostream>
using namespace std;
vector<int> change(vector<int> &A);
int main()
{
    vector<int> A = {1,2,3,4,56,4};
    //vector<int> B = change(A);
    change(A);
    for(auto it = A.begin();it!=A.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
vector<int> change(vector<int> &A)
{
    int i;
    int size = A.size();
    for(i=0;i<size/2;i++)
    {
        int m = A.at(i);
        A.at(i) = A.at(size-1-i);
        A.at(size-1-i) = m;
    }
    return A;
}
