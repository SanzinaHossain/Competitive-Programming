#include<bits/stdc++.h>
using namespace std;
vector<int>vec[100000];
vector<int>prime;
int dis[100000],vis[100000];
bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
bool isvalid(int a,int b)
{
    int c=0;
    while(a>0)
    {
        if(a%10 != b%10)
        {
            c++;
        }
         a=a/10;
        b=b/10;

    }

    if(c==1) {
            return true;
    }
    else  {

     return false;
    }
}
void buildGraph()
{
    for(int i=1000;i<=9999;i++)
    {
        if(isprime(i))
        {
            prime.push_back(i);
        }
    }
    for(int i=0;i<prime.size();i++)
    {
        for(int j=i+1;j<prime.size();j++)
        {
            int a=prime[i];
            int b=prime[j];
            if(isvalid(a,b))
            {
                vec[a].push_back(b);
                vec[b].push_back(a);
            }
        }
    }
}
void bfs(int node)
{
    queue<int>q;
    q.push(node);
    vis[node]=1;
    dis[node]=0;
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        for(int it:vec[cur])
    {
        if(vis[it]==0)
        {
            vis[it]=1;
            dis[it]=dis[cur]+1;
            q.push(it);
        }
    }
    }
}
int main()
{
    int t,a,b;
    cin>>t;
    buildGraph();
    while(t--)
    {
        cin>>a>>b;
        for(int i=1000;i<=9999;i++)
        {
            dis[i]=-1;
            vis[i]=0;
        }
        bfs(a);


        if(dis[b]==-1)
        {
            cout<<"Impossible"<<endl;
        }
        else
        {
            cout<<dis[b]<<endl;
        }
    }
}
