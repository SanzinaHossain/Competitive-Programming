#include<bits/stdc++.h>
using namespace std;
struct edge{
    int src;
    int dis;
    int wt;
};
int n,m;
void bellman(vector<edge>&e)
{
    int parent[n];
    int cost[n];
    vector<int> value(n,INT_MAX);

    parent[0]=-1;
    value[0]=0;
    bool update;
    for(int i=0;i<n-1;i++)
    {
        update=false;
        for(int j=0;j<m;j++)
        {
            int u=e[j].src;
            int v=e[j].dis;
            int w=e[j].wt;
            if(value[u]!=INT_MAX && value[u]+w<value[v])
            {
                parent[v]=u;
                value[v]=value[u]+w;
                update=true;
                cost[v]=value[v];
            }
        }

        if(update==false)
        {
            break;
        }
    }
    for(int j=0;j<m and update==true;++j)
		{
			int u= e[j].src;
			int v = e[j].dis;
			int w = e[j].wt;
			if(value[u]!=INT_MAX and value[u]+w<value[v])
			{
				cout<<"Graph has -VE edge cycle\n";
				return;
			}
		}
		for(int i=1;i<n;++i)
		cout<<"U->V: "<<parent[i]<<"->"<<i<<"  Cost to reach "<<parent[i]<<"from source 0 = "<<value[i]<<"\n";
}
int main()
{
    cin>>n>>m;
    vector< edge > e(m);
    int src,dis,wt;
    for(int i=0;i<m;i++)
    {
        cin>>src>>dis>>wt;
        e[i].src=src;
        e[i].dis=dis;
        e[i].wt=wt;

    }
    bellman(e);
    return 0;

}
