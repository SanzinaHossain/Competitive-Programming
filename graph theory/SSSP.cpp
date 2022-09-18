#include<bits/stdc++.h>
using namespace std;
vector<int> vec[1005];
int dis[1005];
int vis[1005];
void dfs(int node,int d)
{
    vis[node]=1;
    dis[node]=d;
    for(auto it:vec[node])
    {
        if(vis[it]==0)
        {
            dfs(it,dis[node]+1);
        }
    }
}
int main()
{
    int n,a,b,q,x;
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cin>>a>>b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    dfs(1,0);
    cin>>q;
    int ans=-1,min=1005;
    while(q--)
    {
        cin>>x;
        if(dis[x]<min)
        {
            min=dis[x];
            ans=x;
        }
        else if(dis[x]==min && x<ans)
        {
            min=dis[x];
            ans=x;
        }

    }
    cout<<ans<<endl;
}
