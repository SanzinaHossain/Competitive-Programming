#include<bits/stdc++.h>
using namespace std;

int iset(int n,int m,int ar[])
{
    bool s[n+1][m+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(j==0)
            {
                s[i][j]=true;
            }
            else if(i==0)
            {
                s[i][j]=false;
            }
           else if(ar[i-1]>j)
           {
               s[i][j]=s[i-1][j];
           }
           else if( ar[i-1]<=j)
           {
               s[i][j]=s[i-1][j-ar[i-1]] || s[i-1][j];
           }
        }

    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            cout<<s[i][j]<<' ';
        }
        cout<<endl;
    }
    return s[n][m];
}
int main()
{
    int n,m,ar[100];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int v=iset(n,m,ar);
    if(v==true)
    {
        cout<<"it is possible";
    }
    else
    {
        cout<<"not possible";
    }
}
