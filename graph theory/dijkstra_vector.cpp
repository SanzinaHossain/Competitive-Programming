#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
const int MAXN=1e5+3;
const int INF=INT_MAX;
vector< vector<ii> > adj;
int n;
int dijkstra(int b,int n)
{
    int dist[MAXN],par[MAXN];
    bitset<MAXN>isdone;
    priority_queue<ii,vector<ii>,greater<ii> >p;
    fill(dist,dist+n+1,INF);
    p.push(ii(b,0));
    dist[b]=0;
    par[b]=-1;
    while(!p.empty())
    {
        int u=p.top().first;
        p.pop();
        isdone[u]=true;
        for(auto &e:adj[u])
        {
            int v=e.first;
            int w=e.second;
            if(isdone[v]==false && dist[u]+w<dist[v])
            {
                dist[v]=dist[u]+w;
                p.push(ii(v,dist[v]));
                par[v]=u;
            }
        }
    }
    return dist[n];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        float w;
    cin>>n>>m>>w;
    adj.resize(n+3);
    int x,y,z;
    while(m--)
    {
        cin>>x>>y>>z;
        adj[x].push_back(ii(y,z));
        adj[y].push_back(ii(x,z));
    }
    float d=m*w;
    float k=dijkstra(1,n);
    //cout<<k<<' '<<d<<endl;
    if(k<=d)
    {
        printf("%.10f\n",k);
    }
    else
    {
        printf("%.10f\n",d);
    }
    }
    return 0;
}
