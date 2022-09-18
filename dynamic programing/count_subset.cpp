#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int n,ar[100],s;
    cin>>n>>s;
    int dp[n+1][s+1];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        dp[i][0]=1;
    }
    for(int i=1;i<s;i++)
    {
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            if(ar[i-1]>j)
            {
                dp[i][j]=dp[i-1][j];
            }
            else if(ar[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j]+dp[i-1][j-ar[i-1]];
            }
        }
    }
    cout<<"Number of subset is : ";
    cout<<dp[n][s]<<endl;
}
