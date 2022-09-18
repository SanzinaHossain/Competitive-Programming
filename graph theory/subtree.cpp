#include<bits/stdc++.h>
using namespace std;
vector<int>vec[10000];
int vis[10000];
int subtree[10000];
int dfs(int node)
{
    vis[node]=1;
    int s=1;
    for(int it:vec[node])
    {
        if(vis[it]==0)
        {
            s+=dfs(it);
        }
    }
    subtree[node]=s;
        return s;

}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    while(m--)
    {
        cin>>a>>b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    dfs(1);
    for(int i=1;i<=n;i++)
    {
        cout<<subtree[i]<<' ';
    }
}
