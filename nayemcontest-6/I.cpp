#include<bits/stdc++.h>
using namespace std;
long long n,t;
vector<long long>vec;
bool func(long long k)
{
    for(int i=k;i<=n;i++)
    {
        if(vec[i]-vec[i-k]<=t)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    cin>>n>>t;
    vec.resize(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
    }
     for(int i=1;i<=n;i++)
    {
        vec[i]=vec[i]+vec[i-1];
    }
    long long low=0,high=n,res=-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(func(mid))
        {
            res=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<res<<endl;
}
