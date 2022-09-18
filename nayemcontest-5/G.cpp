#include<bits/stdc++.h>
using namespace std;
string mat[510];
long long hori[510][510],ver[510][510];
int main()
{
    long long r,c,i,j;
    cin>>r>>c;
    for(i=1;i<=r;i++)
    {
        cin>>mat[i];
        mat[i]='_'+ mat[i];
        for(j=1;j<=c;j++)
        {
            if(mat[i][j]=='.' && mat[i][j-1]==mat[i][j])
            {
                hori[i][j-1]=1;
            }
            if(mat[i][j]=='.' && mat[i-1][j]==mat[i][j])
            {
                ver[i-1][j]=1;
            }
        }
    }
     for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            hori[i][j]+=hori[i-1][j]+hori[i][j-1]-hori[i-1][j-1];
            ver[i][j]+=ver[i-1][j]+ver[i][j-1]-ver[i-1][j-1];
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<hori[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
     for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<ver[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;

    long long m;
    cin>>m;
    while(m--)
    {
        long long x1,y1,x2,y2;
        long long ans1=0,ans2=0;
        cin>>x1>>y1>>x2>>y2;
        if(y2>y1)
        {
            ans1=hori[x2][y2-1]-hori[x2][y1-1]-hori[x1-1][y2-1]+hori[x1-1][y1-1];
        }
        if(x2>x1)
        {
            ans2=ver[x2-1][y2]-ver[x2-1][y1-1]-ver[x1-1][y2]+ver[x1-1][y1-1];
        }
        cout<<ans1+ans2<<endl;
    }

}
