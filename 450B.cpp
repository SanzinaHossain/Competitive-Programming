#include<bits/stdc++.h>
using namespace std;
long long f[100000007];
int main()
{
    long long n,k,m;
    cin>>n>>k;
    f[1]=n;
    f[2]=k;
    cin>>m;
    for(int i=3;i<=m;i++)
    {
        f[i]=f[i-1]-f[i-2];
    }
    if(f[m]>=0)
    {
        cout<<f[m]<<endl;
    }
    else
    {
        cout<<1000000007+f[m]<<endl;
    }



}
