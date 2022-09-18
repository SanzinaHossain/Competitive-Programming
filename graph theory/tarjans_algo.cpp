#include<bits/stdc++.h>
using namespace std;
int n,m,t=1,scc=0;
vector<int>vec[10000];
int dis[1000],low[10000];
bool vis[10000],onstack[10000];
stack<int>st;
void dfs(int node)
{
    vis[node]=1;
    dis[node]=low[node]=t;
    t++;
    onstack[node]=true;
    st.push(node);
    for(int it:vec[node])
    {

        if(vis[it]==true && onstack[it]==true)
        {
            low[node]=min(low[node],dis[it]);
        }
        else
        {
            if(vis[it]==0)
            {
                dfs(it);
                if(onstack[it]==true)
                {
                    low[node]=min(low[it],low[node]);
                }
            }
        }
    }
    if(low[node]==dis[node])
    {
        scc++;
        cout<<"SCC #"<<scc<<" is: "<<endl;
        while(1)
        {
            int u=st.top();
            st.pop();
            onstack[u]=false;
            cout<<u<<' ';
            if(u==node)
            {
                break;
            }
        }
        cout<<endl;
    }

}
int main()
{
    int a,b;
    cin>>n>>m;
    while(m--)
    {
        cin>>a>>b;
        vec[a].push_back(b);
    }
    for(int i=1;i<=n;i++)
    {
        vis[i]=onstack[i]=false;
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
        }
    }
}
