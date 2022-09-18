#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long> vec(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
        vec[i]=vec[i]+vec[i-1];
    }
    long long ans=0;
    for(int i=1;i<n;i++)
    {
        if(vec[i]==(vec[n]-vec[i]))
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}
