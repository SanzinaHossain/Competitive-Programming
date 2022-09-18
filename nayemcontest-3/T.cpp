#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> vec(n);
        for(auto &el:vec)
        {
            cin>>el;
        }
        long long  begin=0,end=0,ans=1000000000;
        map<long long, long long>mp;
        while(begin<n)
        {
            bool d=false;
            while(end<n)
            {
                if(end-begin>mp.size())
                {
                    d=true;
                    break;
                }
                mp[vec[end]]++;
                end++;
            }

        if(end-begin>mp.size())
                {
                    d=true;
                }
                if(d)
                {
                    ans=min(ans,end-begin);
                }
                mp[vec[begin]]--;
                if(mp[vec[begin]]==0)
                {
                    mp.erase(vec[begin]);
                }
                begin++;
        }
        if(ans==1000000000)
        {
            cout<<-1<<endl;
        }
        else

        {
            cout<<ans<<endl;
        }


    }
}
