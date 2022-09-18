#include<bits/stdc++.h>
using namespace std;
vector<int>vec[10000];
int vis[1000],in[1000],out[1000];
int t=1;
bool dfs(int v)
{
    vis[v]=1;
    in[v]=t;
    t++;
    for(int it:vec[v])
    {
        if(vis[it]==0)
        {
            dfs(it);
        }
    }
    out[v]=t;
    t++;
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
        cout<<in[i]<<' ';
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<out[i]<<' ';
    }

}
