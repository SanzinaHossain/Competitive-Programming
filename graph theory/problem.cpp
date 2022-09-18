#include<bits/stdc++.h>
using namespace std;
int n,m,s,r,t;
int c=0;
char ar[105][105];
bool vis[105][105];
bool isvalid(int a,int b)
{
    if(a<1 || b<1 || a>n || b>m)
    {
        return false;
    }
    if(vis[a][b]==true || ar[a][b]=='*')
    {
           return false;
    }

    return true;
}
int dfs(int x,int y)
{
    if(isvalid(x-1,y)==true)
    {
        c++;
         vis[x-1][y]=true;
        dfs(x-1,y);
    }
    else
    {
        if(r==x-1 && t==y && c>=14)
        {

            return 1;
        }
    }
    if(isvalid(x+1,y)==true)
    {
        c++;
         vis[x+1][y]=true;
        dfs(x+1,y);
    }
    else
    {
        if(r==x+1 && t==y && c>=14)
        {

            return 1;
        }
    }
    if(isvalid(x,y+1)==true)
    {
        c++;
         vis[x][y+1]=true;
            dfs(x , y+1);
    }
    else
    {
        if(r==x && t==y+1 && c>=14)
        {

            return 1 ;
        }
    }
    if(isvalid(x,y-1)==true)
    {
        c++;
         vis[x][y-1]=true;
        dfs(x , y-1);
    }
    else
    {
        if(r==x && t==y-1 && c>=14)
        {

            return 1;
        }
    }
}
int main()
{
    cin>>n>>m>>s>>r>>t;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>ar[i][j];
        }
    }
    vis[r][t]=true;
    if (dfs(r,t)==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
