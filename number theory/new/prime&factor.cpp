#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>prime;
vector< pair<ll,ll> >vec;
void sieve(ll n)
{
    vector<bool>iscomp(n+1);
    for(int i=2;i*i<=n;i++)
    {
        if(iscomp[i]) continue;
        for(int j=2*i;j<=n;j=j+i)
        {
            iscomp[j]=true;
        }
    }
    prime.push_back(2);
    for(int i=3;i<=n;i=i+2)
    {
        if(iscomp[i]==0)
        {
            prime.push_back(i);
        }
    }
}
void fact(ll x)
{
    ll cnt;
    for(int i=0;i<prime.size();i++)
    {
        if(x%prime[i]==0)
        {
            cnt=0;
            while(x%prime[i]==0)
            {
                x=x/prime[i];
                cnt++;
            }
            vec.push_back({prime[i],cnt});
        }
    }
    if(x>1) vec.push_back({x,1});
}
int main()
{
    sieve(10000);
    ll x;
    cin>>x;
    fact(x);
    for(auto el:vec)
    {
        cout<<el.first<<"^"<<el.second<<endl;
    }
}
