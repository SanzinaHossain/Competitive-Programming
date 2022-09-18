#include<bits/stdc++.h>
using namespace std;
int targetx,targety;
int vis[10][10],dist[10][10];
int dx[] = { -2 , -1 , 1 , 2 , 2 , 1 , -1 , -2};
int dy[] = { 1 , 2 , 2 , 1 , -1 , -2 , -2 , -1};
bool isvalid(int x,int y)
{
    if(x<1 || y<1 || x>8 || y>8)
    {
        return false;
    }
    if(vis[x][y]==1)
    {
        return false;
    }

    return true;
}
int bfs(int x,int y)
{
    queue<pair <int,int> >q;
    q.push({x,y});
    vis[x][y]=1;
    dist[x][y]=0;
    if(x==targetx && y==targety)
    {
        return dist[x][y];
    }
    while(!q.empty())
    {
        int curx=q.front().first;
        int cury=q.front().second;
        q.pop();
        for(int i=0;i<8;i++)
        {
            if(isvalid(curx+dx[i],cury+dy[i]))
            {
                int x=curx+dx[i];
                int y=cury+dy[i];
                vis[x][y]=1;
                q.push({x,y});
                dist[x][y]=dist[curx][cury]+1;
                if(x==targetx && y==targety)
                {
                    return dist[x][y];
                }
            }
        }
    }

}
int main()
{
    char m,n;
    int t,x,y;
    while(1)
    {
        char a,b;
        for(int i=1;i<=8;i++)
        {
            for(int j=1;j<=8;j++)
            {
                vis[i][j]=0;
               //dist[i][j]=0;
            }
        }
        cin>>a>>b;
        m=a;
        x=a-'a'+1;
        y=b-'0';
        cin>>a>>b;
        n=a;
        targetx=a-'a'+1;
        targety=b-'0';
        cout<<"To get from "<<m<<y<<" to "<<n<< b<<" takes "<<bfs(x,y)<<" knight moves."<<endl;
    }

}
