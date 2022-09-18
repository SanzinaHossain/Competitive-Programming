#include<bits/stdc++.h>
using namespace std;
typedef unsigned long int ll;
ll binomialcf(ll n,ll k)
{
    ll res=1;
    if(k>n-k)
    {
        k=n-k;
    }
    for(int i=0;i<k;i++)
    {
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
ll catalan(ll n)
{
    ll c=binomialcf(2*n,n);
    return c/(n+1);
}
int main()
{
    while(1)
    {
        ll n;
        cin>>n;
        if(n>=1)
        {
            ll m=catalan(n);
            cout<<m<<endl;
        }
        else
        {
            return 0;
        }
    }
}
