#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>vec(n+1),vec1(n+1),vec2(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i]>>vec1[i];
        vec2[i]=vec[i]*vec1[i];
    }
    for(int i=1;i<=n;i++)
    {
        vec2[i]=vec2[i]+vec2[i-1];
    }
   /* for(int i=1;i<=n;i++)
    {
       cout<<vec2[i]<<' ';
    }*/
    while(m--)
    {
        ll x;
        cin>>x;
        ll val=lower_bound(begin(vec2),end(vec2),x)-begin(vec2);
        cout<<val<<endl;
    }
}
