#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[101][101],i,j,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]>=0)
            {
                sum=sum+a[i][j];
            }
        }
    }
    cout<<sum;
}
