#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ans=0,x,c=0;
    cin>>n;
    vector<long long> mp(n);
    for( auto &el:mp)
    {
        cin>>el;
    }
    sort(begin(mp),end(mp));
    long long begin=n-1,end=0,k=mp[begin];
    while(begin>0)
    {
        if(mp[begin]==k)
        {
            end=0;
        while(end <begin && mp[begin]-mp[end]>=ans)
        {
            x=mp[begin]-mp[end];
            if(ans<=x)
               {
                   ans=x;
                   c++;
               }
               end++;
        }
        begin--;
        }
        else
        {
            break;
        }

    }

    cout<<ans<<' '<<c;

}
