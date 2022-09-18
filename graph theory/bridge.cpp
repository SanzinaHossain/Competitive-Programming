#include<bits/stdc++.h>
using namespace std;
vector<int>vec[100000];
int in[10000],low[10000],vis[100000];
int timer=0;
void dfs(int node,int par)
{
    vis[node]=1;
    in[node]=low[node]=timer;
    timer++;
    for(int child:vec[node])
    {
        if(child==par)
        {
            cout<<"continue create krbo"<<endl;
            cout<<child<<' '<<par<<endl;
            continue;
        }
        if(vis[child]==1)
        {
            // back edge
            cout<<"back edge a dukci"<<endl;
            low[node]=min(low[node],in[child]);
        }
        else
        {
            cout<<"call krteci"<<endl;
            dfs(child,node);
            cout<<"call  ar por"<<endl;
            cout<<child<<' '<<node<<endl;
            if(low[child]>in[node])
            {
                cout<<"print krte dukci"<<endl;
                cout<<node<<"-"<<child<<" is a bridge"<<endl;
            }
            low[node]=min(low[node],low[child]);
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
    dfs(1,-1);
}
