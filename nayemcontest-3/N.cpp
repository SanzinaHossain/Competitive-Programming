#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<long long> vec(n);
        for(auto &el:vec)
        {
            cin>>el;
        }
        long long begin=0,end=0,ans=0,c=0;
        map<long,long>mp;
        while(begin<n)
        {
            while(end<n && mp.size()<=k)
            {
                if(mp.size()==k && mp.count(vec[end])==0)
                {
                    break;
                }
                mp[vec[end]]++;
                end++;

            }
             if(mp.size()<=k)
             {
                 //cout<<begin<<' '<<end<<endl;
                 ans=ans+(end-begin);
                //cout<<ans<<endl;
             }
            mp[vec[begin]]--;
            if(mp[vec[begin]]==0)
            {
                mp.erase(vec[begin]);
            }
            begin++;
        }
        long long l=n*(n+1);

        cout<<l/2 - ans<<endl;
    }
}
