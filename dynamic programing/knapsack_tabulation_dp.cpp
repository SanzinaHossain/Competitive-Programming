#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,n,dp[500][500],wt[1000],p[1000];
    cin>>n>>w;
    for(int i=0;i<n;i++)
    {
        cin>>p[i]>>wt[i];
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
            else if(wt[i-1]>j)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],p[i-1]+dp[i-1][w-wt[i-1]]);
            }
        }
    }
    cout<<dp[n][w]<<endl;
}
