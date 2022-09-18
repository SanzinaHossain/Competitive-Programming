#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,i,ans=0;
    cin>>n;
    vector< pair<long long,long long> > vec;
    for( i=0;i<n;i++)
    {
        cin>>a>>b;
        vec.push_back({a,b});
    }
    sort(vec.begin(),vec.end());
    /*for(auto el:vec)
    {
        cout<<el.first<<' '<<el.second<<endl;
    }*/
    for(auto el:vec)
    {
        if(ans>el.second)
        {
            ans=el.first;
        }
        else
        {
            ans=el.second;
        }
    }
    cout<<ans<<endl;
}
