#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
{
    vector<int> s(n);
    for(auto &el:s)
    {
      cin>>el;
    }
    int begin=0,end=0,ans=INT_MAX,sum=0;
    while(1)

    {
        while(end<n && sum<m)
        {
            sum=sum+s[end++];
        }
            if(sum<m)
            {
                break;
            }

            ans=min(ans,end-begin);
            sum=sum-s[begin];
            begin++;
    }
        if(ans==INT_MAX)
        {
            cout<<0<<endl;
        }
        else

        {
            cout<<ans<<endl;
        }
}
return 0;
}
