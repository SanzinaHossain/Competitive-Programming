#include<bits/stdc++.h>
using namespace std;
vector<int>vec[10000];
int vis[10000];
int maxd,maxnode;
void dfs(int node,int d)
{
    vis[node]=1;
    if(d>maxd)
    {
        maxd=d;
        maxnode=node;
    }
    for(int it:vec[node])
    {
        if(vis[it]==0)
        {
            cout<<it<<' '<<d+1<<endl;
            dfs(it,d+1);
        }
    }
}
int main()
{
    int n,a,b,m;
    cin>>n;
    m=n-1;
    while(m--)
    {
        cin>>a>>b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
   /* maxd=-1;
    dfs(1,0);
    cout<<maxd<<' '<<maxnode<<endl;
    for(int i=1;i<=n;i++)
    {
        vis[i]=0;
    }*/
    maxd=-1;
    dfs(1,0);
      cout<<maxd<<' '<<maxnode<<endl;

}
