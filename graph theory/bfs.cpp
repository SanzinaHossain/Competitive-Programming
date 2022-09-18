#include<bits/stdc++.h>
using namespace std;
vector<int>vec[10000];
int vis[10000],ar[10000],bf[10000];
void bfs(int node)
{
    queue<int>q;
    q.push(node);
    vis[node]=1;
    ar[node]=0;
    int j=1;
    while(!q.empty())
    {
        int cur=q.front();
        bf[j]=cur;
        j++;
        q.pop();
        for(int it:vec[cur])
        {
            if(vis[it]==0)
           {
               q.push(it);
               vis[it]=1;
             ar[it]=ar[cur]+1;
           }

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
        //vec[b].push_back(a);
    }
    bfs(1);
    for(int i=1;i<=n;i++)
    {
        cout<<bf[i]<<' ';
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<ar[i]<<' ';
    }
}
