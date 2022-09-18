#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
     ll t;
     cin>>t;
     while(t--)
     {
         ll a,b,c;
         cin>>a>>b>>c;
         ll k=min(a,b);
         ll low=0,high=k,ans=0;
         while(low<=high)
         {
             ll mid=(low+high)/2;
             ll x=a-mid;
             ll y=b-mid;
             ll s=x+y+c;
             if(s>=mid)
             {
                 ans=mid;
                 low=mid+1;
             }
             else
             {
                 high=mid-1;
             }
         }
         cout<<ans<<endl;
     }
}
