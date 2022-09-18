#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m,n;
ll func(ll k)
{
    ll x=n-k;
    ll q=x*(x+1)/2;
    ll p=q-m;
    if(k==p)
    {
        return 1;
    }
    else if(p>k)
    {
        return 0;
    }
    else{
        return -1;
    }

}
int main()
{
    cin>>n>>m;
    ll high=n,low=0,res=-1;
    while(low<=high)
    {
        ll mid=(low+high)/2;
        if(func(mid)==1)
        {
            res=mid;
            cout<<res<<endl;
            return 0;
        }
        else if(func(mid)==0)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
}
