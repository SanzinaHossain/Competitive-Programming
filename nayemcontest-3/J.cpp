#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    while(m--)
    {
        long long n,t;
    cin>>n>>t;
    vector<long long> vec(n);
    for(auto &el:vec)
    {
        cin>>el;
    }
    long long begin=0,end=0,inside=0,ans=0,sum;
    while(begin<n)
    {
        while(end<n && inside+vec[end]<=t)
        {
            inside=inside+vec[end];
            end++;
        }
        if(end-begin>ans)
        {
            ans=end-begin;
            sum=inside;
        }
        else if(end-begin==ans)
        {
            ans=end-begin;
            if(sum>inside)
            {
                sum=inside;
            }
        }
        inside=inside-vec[begin];
        begin++;
    }
    cout<<sum<<' '<<ans<<endl;
    }
}
