#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int lp[1000000];
void sieve(ll n)
{
    vector<bool>flag(n+1);
    for(int i=2;i<=n;i++)
    {
        if(flag[i]) continue;
        for(int j=2*i;j<=n;j+=i)
        {
            flag[j]=1;
            lp[j]=i;
            cout<<lp[j]<<' ';
        }
        lp[i]=i;
    }
}
int main()
{
    sieve(10);
    map<ll,ll>fact;
    vector<ll>vec;
    ll x;
    cin>>x;
   while(x>1)
   {
       fact[lp[x]]++;
       vec.push_back(lp[x]);
       x=x/lp[x];

   }
   cout<<endl;
   for(auto el:vec)
   {
       cout<<el<<' ';
   }
   cout<<endl;
   for(auto el:fact)
   {
       cout<<el.first<<"^"<<el.second<<endl;
   }
}
