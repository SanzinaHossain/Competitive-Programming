#include<bits/stdc++.h>
using namespace std;
int subset(int n,int ar[],int sum)
{
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(j==0)
            {
                dp[i][j]=true;
            }
            else if(i==0)
            {
                dp[i][j]=false;
            }
            else if(ar[i-1]>j)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j] || dp[i-1][j-ar[i-1]];
            }
        }
    }
   int diff=INT_MAX;
   for(int i=0;i<=sum/2;i++)
   {
       int f=i;
       int s=sum-i;
       if(dp[n][i]==true && diff>abs(f-s))
       {
           diff=abs(f-s);
       }
   }
   return diff;
}
int main()
{
    int n,ar[100],sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
    }
    int k=subset(n,ar,sum);
    cout<<k<<endl;
}
