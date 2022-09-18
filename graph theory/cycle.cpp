#include<bits/stdc++.h>
using namespace std;
vector<int>vec[1000];
int vis[1000];
bool dfs(int node,int parent)
{
    vis[node]=1;
    for(int it:vec[node])
    {
        if(vis[it]==0)
        {
            if(dfs(it,node)==true)
            {
                return true;
            }
        }
        else
        {
            if(it!=parent)
            {
                return true;
            }
        }
    }
    return false;
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
    if(dfs(1,1)==true)
    {
      cout<<"there is a cycle"<<endl;
    }
    else
    {
        cout<<"no cycle"<<endl;
    }
}
