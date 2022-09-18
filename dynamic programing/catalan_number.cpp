#include<bits/stdc++.h>
using namespace std;
int catalan(int n)
{
    long long  v[n+1];
    v[0]=1;
    v[1]=1;
    for(int i=2;i<=n;i++)
    {
        v[i]=0;
        for(int j=0;j<i;j++)
        {
            v[i]=v[i]+(v[j]*v[i-j-1]);
        }
    }
    return v[n];
}
int main()
{
    while(1)
    {
        long long  n;
        cin>>n;
        int k=catalan(n);
        cout<<k<<endl;
    }
}
