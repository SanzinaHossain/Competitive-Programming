#include<bits/stdc++.h>
using namespace std;
long long mat[128][128] ;
int main()
{
    long long r,c,i,j,q,r1,c1,r2,c2,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>mat[i][j];
            mat[i][j]+=mat[i-1][j]+mat[i][j-1]-mat[i-1][j-1];
        }
    }
        long long sum,ans=0;
        for(r1=1;r1<=n;r1++)
        {
            for(c1=1;c1<=n;c1++)
            {
                for(r2=r1;r2<=n;r2++)
                {
                    for(c2=c1;c2<=n;c2++)
                    {
                        sum=mat[r2][c2]-mat[r2][c1-1]-mat[r1-1][c2]+mat[r1-1][c1-1];
                       // cout<<sum<<endl;
                        if(ans<=sum)
                        {
                            ans=sum;
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;


}
