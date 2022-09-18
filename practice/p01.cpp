#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll ar[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    reverse(ar,ar+n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<' ';
    }
}
