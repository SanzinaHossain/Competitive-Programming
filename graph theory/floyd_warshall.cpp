#include<bits/stdc++.h>
using namespace std;
#define v 4
warshall(int graph[v][v])
{
    int dist[v][v];
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            dist[i][j]=graph[i][j];
        }
    }
    for(int k=0;k<v;k++)
    {
     for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(dist[i][k]==INT_MAX || dist[k][j]==INT_MAX )
            {
                continue;
            }
            else if(dist[i][k]+dist[k][j]<dist[i][j])
            {
                dist[i][j]=dist[i][k]+dist[k][j];
            }
        }
    }
    }
    for(int i=0;i<v;i++)
    {
        if(dist[i][i]<0)
        {
            cout<<"Negative cycle detected"<<endl;
            return 0;
        }
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<dist[i][j]<<' ';
        }
        cout<<endl;
    }
}
int main()
{
    int graph[v][v]={{0,1,INT_MAX,INT_MAX},
                      {INT_MAX,0,-5,INT_MAX},
                      {INT_MAX,INT_MAX,0,2},
                      {INT_MAX,2,INT_MAX,0}};
      warshall(graph);
      return 0;

}
