#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,w;
    //long long int wt[1005],val[1005];
    cin>>n>>w;
    long long int dp[w+5];
    memset(dp, 0, sizeof dp);
    long long int wt[1005],val[1005];
    for(int i=0;i<n;i++)
    {
        cin>>wt[i]>>val[i];
    }
    for(int i=0;i<=w;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(wt[j]<=i)
            {
                dp[i]=max(dp[i],dp[i-wt[j]]+val[j]);
            }
        }
    }
    cout<<dp[w]<<endl;
}
