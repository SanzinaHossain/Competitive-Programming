#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    vector<ll>vec(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
    }
    sort(begin(vec),end(vec));
    ll q,i=1;
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;

        ll m=upper_bound(begin(vec),end(vec),x)-begin(vec);

        cout<<m-1<<endl;
    }
}
