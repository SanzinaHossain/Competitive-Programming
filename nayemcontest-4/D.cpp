#include<bits/stdc++.h>
using namespace std;
int shorna(int m,int n)
{
    if(m==0)
    {
        return 1;
    }
    if(m==n)
    {
        return 1;
    }
     if(m>0 && n>0)
    {
        return shorna(m-1,n-1)+shorna(m,n-1);
    }

}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<shorna(m,n);
}


