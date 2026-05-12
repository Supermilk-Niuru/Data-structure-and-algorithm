//判断两个英语单词谁在前，谁在后
#include<iostream>
#include<vector>
using namespace std;
void judge(vector<char> &A,vector<char> &B);
int main()
{
    vector<char> A = {'a','p','p','l','e'};
    vector<char> B = {'a','p','p','l','e','s'};
    judge(A,B);
}
void judge(vector<char> &A,vector<char> &B)
{
    int i,m;
    for(i=0;i<(A.size()>=B.size()?B.size():A.size());i++)
    {
        m = i;
        if(A.at(i)>B.at(i))
        {
            int j;
            for(j=0;j<B.size();j++)
            {
                cout<<B.at(j);
            }
            cout<<endl;
            return;
        }
        else if(A.at(i)<B.at(i))
        {
            int j;
            for(j=0;j<A.size();j++)
            {
                cout<<A.at(j);
            }
            cout<<endl;
            return;
        }
    }
     
        
            if(A.size()>B.size())
            {
                int j;
                for(j=0;j<B.size();j++)
                {
                    cout<<B.at(j);
                }
                cout<<endl;
            }
            else if(A.size()<B.size())
            {
                int j;
                for(j=0;j<A.size();j++)
                {
                    cout<<A.at(j);
                }
                cout<<endl;
            }
            else
            {
                cout<<"="<<endl;
            }
        
}