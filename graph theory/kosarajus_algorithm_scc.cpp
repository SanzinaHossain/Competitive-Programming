#include<bits/stdc++.h>
using namespace std;
vector<int>vec[1000],tr[1000];
vector<int>order,scc;
int vis[10000];
void dfs(int node)
{
    vis[node]=1;
    for(int it:vec[node])
    {
        if(vis[it]==0)
        {
            dfs(it);
        }
    }
    order.push_back(node);
}
void dfs1(int node)
{
    vis[node]=1;
    for(int it:tr[node])
    {
        if(vis[it]==0)
        {
            dfs1(it);
        }
    }
    scc.push_back(node);
}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    while(m--)
    {
        cin>>a>>b;
        vec[a].push_back(b);
        tr[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
        }
    }
   for(int i=1;i<=n;i++)
   {
       vis[i]=0;
   }
   for(int i=1;i<=n;i++)
   {
       if(vis[order[n-i]]==0)
       {
           scc.clear();
           dfs1(order[n-i]);

            cout<<"dfs1() called from "<<order[n-i]<<" and printing SCC"<<endl;
			for(int node : scc)
			cout<<node<<" ";
			cout<<endl;
       }
   }
}
