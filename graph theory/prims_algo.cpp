#include<bits/stdc++.h>
using namespace std;
#define v 7
int findvalue( vector<int> &value,vector<bool>&s)
{
    int minimum = INT_MAX;
	int vertex;
	for(int i=0;i<v;++i)
	{
		if(s[i]==false && value[i]<minimum)
		{
			vertex = i;
			minimum = value[i];
		}
	}
	return vertex;
}
int prims(int graph[v][v])
{
    int parent[v];
    vector<int>value(v,INT_MAX);
    vector<bool> s(v,false);

    parent[0]=-1;
    value[0]=0;
    for(int i=0;i<v-1;i++)
    {
        int u=findvalue(value,s);
        s[u]=true;
        for(int j=0;j<v;j++)
        {
            if(graph[u][j]!=0 && s[j]==false && graph[u][j]<value[j])
            {
                parent[j]=u;
                value[j]=graph[u][j];
            }
        }
    }


        for(int i=1;i<v;++i)
		{
		    cout<<"U->V: "<<parent[i]<<"->"<<i<<"  wt = "<<graph[parent[i]][i]<<"\n";
		}
}
int main()
{
    int graph[v][v]={  {0,6,4,0,0,0,0},
                       {6,0,5,14,7,0,0},
                       {4,5,0,0,0,2,0},
                       {0,14,0,0,3,0,0},
                       {0,7,0,3,0,8,0},
                       {0,0,2,0,8,0,11},
                       {0,0,0,0,0,11,0}
                    };
    prims(graph);
    return 0;
}
