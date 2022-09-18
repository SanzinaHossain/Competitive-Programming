#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[1005];
ll n,m;
bool func(ll k)
{
    ll sum=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>k)
        {
            return false;
        }
        if(sum+ar[i]>k)
        {
            sum=0;
        }
        if(sum==0)
        {
            c++;
            sum=sum+ar[i];
        }
        if(c>m)
        {
            return false;
        }
    }
    return true;

}
int main()
{
    ll t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        ll low=0,high=1000000000,res=0;
        while(low<=high)
        {
            ll mid=(low+high)/2;
            if(func(mid)==true)
            {
                  res=mid;
                  high=mid-1;
            }
            else
            {
                low=mid+1;
            }

        }
        cout<<"Case "<<j<<":"<<res<<endl;
    }
}
