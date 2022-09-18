#include<bits/stdc++.h>
using namespace std;
long long css[26];
int main()
{
    long long n,k,ans=0,x=0;
    string l;
    cin>>n>>k;
    cin>>l;
    for(int i=0;i<n;i++)
    {
        css[l[i]-'A']++;
    }
   /* for(int i=0;i<26;i++)
    {
        cout<<css[i]<<' ';
    } */
    //cout<<endl;
    sort(css,css+26);
    for(int j=25;k>0;j--)
    {
        x=min(k,css[j]);
        k=k-x;
        ans=ans+x*x;
    }
    cout<<ans<<endl;

}
