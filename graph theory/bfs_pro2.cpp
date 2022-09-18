#include<bits/stdc++.h>
using namespace std;
vector<int> vec[1000001];
int dis[1000001],vis[1000001],level[1000001];
void bfs(int node)
{
    queue<int>q;
    q.push(node);
    vis[node]=1;
     dis[node]=0;
     while(!q.empty())
     {
         int c=q.front();
         q.pop();
         for(int it:vec[c])
         {
             if(vis[it]==0)
             {
                 vis[it]=1;
                 dis[it]=dis[c]+1;
                 q.push(it);
                 level[dis[it]]++;
             }
         }
     }
}
int main()
{
    int n,m,a,b,q,x,y;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    cin>>q;
    while(q--)
    {
        cin>>x>>y;
        for(int i=0;i<=n;i++)
        {
            level[i]=0;
            vis[i]=0;
        }
        bfs(x);
        cout<<level[y]<<endl;
    }
}

