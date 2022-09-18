#include<bits/stdc++.h>
using namespace std;
vector<int> vec[1000];
int vis[1000];
void dfs(int node)
{
    vis[node]=1;
    for(int it : vec[node])
      if(vis[it]==0) dfs(it);


}
int main()
{
    int n,m,a,b,count=0;
    cin>>n>>m;
    while(m--)
    {
        cin>>a>>b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    for(int j=1;j<=n;j++)
    {
        if(vis[j]==0)
        {
            dfs(j);
            count++;
        }
    }
    cout<<count<<endl;
}
