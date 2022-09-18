#include<bits/stdc++.h>
using namespace std;
struct node
{
    int parent;
    int rankk;
};
struct edge
{
    int src;
    int dis;
    int w;
};
vector<edge>mst;
vector<node>ds;
int find(int v)
{
    if(ds[v].parent==-1)
    {
        return v;
    }
    return ds[v].parent=find(ds[v].parent);
}
int unionset(int a,int b)
{
    if(ds[a].rankk<ds[b].rankk)
    {
        ds[a].parent=b;
    }
    else if(ds[a].rankk>ds[b].rankk)
    {
        ds[b].parent=a;
    }
    else
    {
        ds[a].parent=b;
        ds[b].rankk+=1;;
    }
}
bool comp(edge a,edge b)
{
    if(a.w<b.w)
    {
        return true;
    }
    return false;
}
void printEdgeList(vector<edge>& edge_List)
{
	for(auto p: edge_List)
		cout<<"src: "<<p.src<<"  dst: "<<p.dis<<"  wt: "<<p.w<<"\n";
	cout<<"============================================================\n";
	cout<<endl;
}
int kruskal(vector<edge> &edge_list,int n,int m)
{
    cout<<"edge_list before sort:"<<endl;
    printEdgeList(edge_list);
    sort(edge_list.begin(),edge_list.end(),comp);
     cout<<"edge_list after sort:"<<endl;
    printEdgeList(edge_list);
    int i=0,j=0;
    while(i<n-1 && j<m)

    {
        int from=find(edge_list[j].src);
        int to=find(edge_list[j].dis);

        if(from==to)
        {
            j++;
            continue;
        }

        unionset(from,to);
        mst.push_back(edge_list[j]);
		++i;
    }

}
void printMST(vector<edge>& mst)
{
    cout<<endl;
	cout<<"MST formed is\n";
	int s=0;
	for(auto p: mst)
		{
		    cout<<"src: "<<p.src<<"  dst: "<<p.dis<<"  wt: "<<p.w<<"\n";
		    s=s+p.w;
		}
		cout<<endl;
		cout<<"MST length is:";
		cout<<s<<endl;
}
int main()
{
    int n,m;
    cin>>n>>m;
    ds.resize(n);
    for(int i=0;i<n;i++)
    {
        ds[i].parent=-1;
        ds[i].rankk=0;
    }
    vector<edge>edge_list;
    edge temp;
  for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        temp.src=a;
        temp.dis=b;
        temp.w=c;
        edge_list.push_back(temp);

    }
    kruskal(edge_list,n,m);
    printMST(mst);
}
