#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int n=str.size();
       // cout<<n<<endl;
        int begin=0,end=0;
        int ans=100000000;
         map<char , int> mp;
        while(begin<n)
        {
            while(end<n && mp.size() < 3)
            {
                mp[ str[end] ]++;
                end++;
            }
            if(mp.size()==3)
            {
                ans=min(ans , end-begin);
            }
            mp[ str[begin] ]--;
            if(mp[str[begin]]==0)
            {
                mp.erase(str[begin]);
            }
            begin++;
        }
            if(ans==100000000)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<ans<<endl;
            }

    }
}
