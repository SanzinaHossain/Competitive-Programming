#include<bits/stdc++.h>
using namespace std;
char ar[32][32];
bool vis[32][32];
int dist[32][32];
int n;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool isvalid(int x,int y)
{
    if(x<1 || y<1|| x>n || y>n)
    {
        return false;
    }
    if(vis[x][y]==1 || ar[x][y]=='T')
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
   int startx,starty,endx,endy;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<n;j++)
        {
            cin>>ar[i][j];
			if(ar[i][j]=='S')
			{
				startx=i;
				starty=j;
			}
			else if(ar[i][j]=='E')
			{
				endx=i;
				endy=j;
			}
        }
    }
    bfs(startx,starty);
	cout<<dist[endx][endy]<<endl;

}
