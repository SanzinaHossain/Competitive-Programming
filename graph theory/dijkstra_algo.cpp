#include<bits/stdc++.h>
using namespace std;
#define n 3
int min_max(vector<int> & value ,vector<bool>&pro)
{
    int maxx=INT_MAX;
    int v;
    for(int i=0;i<n;i++)

    {
        if(pro[i]==false && value[i]<maxx)
        {
            maxx=value[i];
            //cout<<maxx<<endl;
            v=i;
        }
    }
    return v;
}
void dijkstra(int graph[n][n])
{
    int parent[n];
    vector<int>value(n,INT_MAX);
    vector<bool>pro(n,false);
    parent[0]=-1;
    value[0]=0;
    for(int i=0;i<n-1;i++)
    {
        int u=min_max(value,pro);
        pro[u]=true;
        for(int j=0;j<n;j++)
        {
            if(pro[j]==false && graph[u][j]!=0 && value[u]!=INT_MAX && (value[u]+graph[u][j]<value[j]))
            {
                value[j]=value[u]+graph[u][j];
                parent[j]=u;
            }
        }
    }

    /*for(int i=1;i<n;++i)
		cout<<"U->V: "<<parent[i]<<"->"<<i<<"  wt = "<<graph[parent[i]][i]<<"\n";*/

		cout<<value[n-1]<<endl;


}
int main()
{
     int graph[n][n] = { {0,10,20},
						{10,0,5},
						{20,5,0} };
    dijkstra(graph);
    return 0;
}
