#include<bits/stdc++.h>
using namespace std;
vector<long long>vec[100005];
long long vis[100000];
long long c_size;
long long mod=1000000007;
void dfs(long long v)
{
    vis[v]=1;
    c_size++;
    for(int it:vec[v])
    {
        if(vis[it]==0)
        {
            dfs(it);
        }
    }
}
int main()
{
    int n,m,a,b,t;
    cin>>t;
    while(t--)
    {
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        vis[i]=0;
        vec[i].clear();
    }
    while(m--)
    {
        cin>>a>>b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
     int c=0,res=1;
    for(int i=1;i<=n;i++)
    {
       if(vis[i]==0)
        {
            c_size=0;
            dfs(i);
            c++;
            res=(res*c_size)%mod;
        }
    }
    //res=(res*c_size)%mod;
    cout<<c<<' '<<res<<endl;

    }

}
