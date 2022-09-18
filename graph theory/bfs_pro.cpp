#include<bits/stdc++.h>
using namespace std;
vector<int>vec[10000];
int vis[10000];
int dis[10000];
void bfs(int node)
{
    queue<int> q;
    q.push(node);
    vis[node]=1;
    dis[node]=0;
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        for(int it:vec[cur])
        {
            if(vis[it]==0)
           {
               q.push(it);
               vis[it]=1;
             dis[it]=dis[cur]+1;
           }

        }
    }
}
int main()
{
    int n,m,a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            vec[i].clear();
            vis[i]=0;
            //dis[i]=0;
        }
        while(m--)
        {
            cin>>a>>b;
            vec[a].push_back(b);
            vec[b].push_back(a);
        }
        bfs(1);
        cout<<dis[n]<<endl;
    }
}
