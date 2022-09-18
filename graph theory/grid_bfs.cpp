#include<bits/stdc++.h>
using namespace std;
int vis[1000][1000];
int dist[1000][1000];
int n,m;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool isvalid(int x,int y)
{
    if(x<1 || y<1|| x>n || y>m)
    {
        return false;
    }
    if(vis[x][y]==1)
    {
        return false;
    }

    return true;
}
void bfs(int x,int y)
{
    queue<pair<int,int> > q;
    q.push({x,y});
    vis[x][y]=1;
    dist[x][y]=0;
    while(!q.empty())
    {
        int curx=q.front().first;
        int cury=q.front().second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            if(isvalid(curx+dx[i],cury+dy[i]))
            {
                int newx=curx+dx[i];
                int newy=cury+dy[i];
                q.push({newx,newy});
                vis[newx][newy]=1;
                dist[newx][newy]=dist[curx][cury]+1;
            }
        }
    }
}
int main()
{
    int x,y;
    cin>>n>>m;
    cin>>x>>y;
    bfs(x,y);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<dist[i][j]<<' ';
        }
        cout<<endl;
    }
}
