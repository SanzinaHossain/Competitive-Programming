#include<bits/stdc++.h>
using namespace std;
int vis[1000];
int col[10000];
vector<int>vec[10000];
bool dfs(int node,int c)
{
    vis[node]=1;
    col[node]=c;
    for(int it:vec[node])
    {
        if(vis[it]==0)
        {
            if(dfs(it,c^1)==false)
            {
                return false;
            }
        }
        else
        {
            if(col[node]==col[it])
            {
                cout<<"pataici"<<endl;
                return false;
            }
        }
    }
    return true;

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
        cout<<"This is a bipartite graph"<<endl;
    }
    else
    {
        cout<<"This is not a bipartite graph"<<endl;
    }
}
