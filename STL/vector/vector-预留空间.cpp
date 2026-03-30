//reverse预留空间
#include<iostream>
#include<vector>
using namespace std;
void Printvector(vector<int> &m);
int main()
{
    vector<int> m1;
    int i;
    int num = 0;
    int *p = NULL;
    m1.reserve(10000);//直接先分给它指定的空间
    for(i=0;i<10000;i++)
    {
        m1.push_back(i+1);
        //每一次内存变化，首地址就会发生变化,计数器就+1
        if(p!=&m1[0])
        {
            p = &m1[0];
            num++;
        }
    }
    cout<<num<<endl;
    //Printvector(m1);
}
void Printvector(vector<int> &m)
{
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<*it<<" ";

    }
    cout<<endl;
}