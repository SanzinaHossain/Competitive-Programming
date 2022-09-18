#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void sieve (ll n)
{
    ll sum=0,i;
    for( i=1;i*i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i+(n/i);
        }
    }
    if(i*i==n)
    {
        sum=sum+i;
    }
    sum=sum-n;
    cout<<sum<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        sieve(n);
    }
}
