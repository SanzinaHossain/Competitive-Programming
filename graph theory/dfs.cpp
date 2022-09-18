#include<bits/stdc++.h>
using namespace std;
bool vis[1000];
bool vss[1000];
vector<int>store;
vector<int>vec[100];
void dfs(int v)
{
    store.push_back(v);
  vis[v]=true;
    for(auto it:vec[v])
    {
        if(!vis[it])
        {
            dfs(it);
        }
    }
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
    for(int i=1;i<=n;i++)
    {
        cout<<i<<":"<<' ';
        for(auto el:vec[i])
        {
            cout<<"->"<<el;
        }
        cout<<endl;
    }
    cout<<endl;
    dfs(1);
    cout<<"DFS list is:";
    for(auto el:store)
    {
        cout<<el<<' ';
    }

}
