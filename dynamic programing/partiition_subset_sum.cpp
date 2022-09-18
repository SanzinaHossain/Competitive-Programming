#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,ar[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
    }
    if(sum%2!=0)
    {
        cout<<"not possible"<<endl;
    }
    else
    {
        bool dp[n+1][sum/2+1];
        for(int i=0;i<=n;++i)
        for(int j=0;j<=sum/2;++j)
        {
            if(i==0 || j==0)    //Base Case
                dp[i][j] = false;
            else if(ar[i-1] > j)    //SkIP case
                dp[i][j] = dp[i-1][j];
            else if(ar[i-1]==j)
                dp[i][j] = true;
            else
                dp[i][j] = dp[i-1][j] || dp[i-1][j-ar[i-1]];
        }
        for(int i=0;i<=n;++i)
        {
            for(int j=0;j<=sum/2;++j)
        {
            cout<<dp[i][j]<<' ';
        }
        cout<<endl;
        }
        if(dp[n][sum/2]== false)
        {
            cout<<"not possible"<<endl;
        }
        else
        {
         cout<<"possbile"<<endl;
        }

    }
}
