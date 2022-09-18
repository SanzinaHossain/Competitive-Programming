#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,l,r,m,i,j;
    char s[1006],s1[1006];
    cin>>n>>m>>k;
    cin>>s+1>>s1+1;
    vector<long long> pre(n+1);
    for( i=1;i<=n;i++)
    {
       for( j=1;j<=m;j++)
       {
           if(s[i+j-1]!=s1[j])
           {
               break;
           }
       }
       if(j==m+1)
       {
           pre[i]=1;
       }
       pre[i]=pre[i]+pre[i-1];
    }
    /*for( i=1;i<=n;i++)
    {
        cout<<pre[i]<<' ';
    }
    cout<<endl;*/
    while(k--)
    {
        cin>>l>>r;
        if(r-m+1<l)
        {
            cout<<0<<endl;
        }
        else
        {

            cout<<pre[r-m+1]-pre[l-1]<<endl;
        }
    }
}
