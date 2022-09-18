#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t;
    cin>>n>>t;
    vector<long long> vec(n);
    for(auto &el:vec)
    {
        cin>>el;
    }
    long long begin=0,end=0,inside=0,ans=0,sum=0;
    while(begin<n)
    {
        while(end<n && inside+vec[end]<=t)
        {
            inside=inside+vec[end];
            end++;
        }
        ans=max(ans,end-begin);
        //sum=max(sum,inside);
        inside=inside-vec[begin];
        begin++;
    }
    cout<<ans<<endl;
}
