#include<bits/stdc++.h>
using namespace std;
vector<int> vec[10000];
int vis[1000];
void dfs(int v)
{
    vis[v]=1;
    for(auto it:vec[v])
    {
        if(vis[it]==0)
        {
            dfs(it);
        }
    }
}
int main()
{
    int n,m,a,b,c=0;
    cin>>n>>m;
    int t=m;
    while(m--)
    {
        cin>>a>>b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
            c++;
        }
    }
    if(c==1 && n>t)
    {
        cout<<"it is a tree"<<endl;
    }
    else
    {
        cout<<"its a graph"<<endl;
    }

}
