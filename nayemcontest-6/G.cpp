#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    while(cin>>t)
    {
       for(int i=1;i<=t;i++)
    {
        ll n,cnt=0;
        cin>>n;
        vector<ll>vec(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>vec[i];
        }
        sort(begin(vec),end(vec));
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {

                ll it=upper_bound(begin(vec),end(vec),vec[i]+vec[j]-1)-begin(vec)-1;
                //cout<<it<<' ';
                ll k=it-j;
               cnt=cnt+k;
            }
        }
        cout<<"Case "<<i<<":"<<' ';
        cout<<cnt<<endl;
    }
  }
}
