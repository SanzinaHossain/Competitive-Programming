#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,h,c=0;
        cin>>n>>h;
        ll ar[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n,greater<ll>());
        if(ar[0]>=h)
        {
            cout<<1<<endl;
        }
        else
        {
            ll c1=h/(ar[0]+ar[1]);
            ll c2=h%(ar[0]+ar[1]);
             if(c1==1 && c2==0)
            {
                c1=2;
            }
            cout<<c1+c2<<endl;

        }

    }
}
