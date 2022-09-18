#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k,x;
    cin>>n>>k;
    vector<ll>vec(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
    }
    for(int i=1;i<=n;i++)
    {
        vec[i]=vec[i]+vec[i-1];
    }
    while(k--)
    {
        cin>>x;
        ll val=lower_bound(begin(vec),end(vec),x)-begin(vec);
        //cout<<val<<' '<<vec[val-1]<<endl;
        ll m=x-vec[val-1];
        cout<<val<<' '<<m<<endl;

    }
}
