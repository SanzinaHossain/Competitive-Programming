#include<bits/stdc++.h>
using namespace std;
vector<int> vec[1000005];
int vis[1000005],cc[1000005];
int c=0;
void dfs(int node)
{
    vis[node]=1;
    cc[node]=c;
    for(int it:vec[node])
    {
        if(vis[it]==0)
        {
            dfs(it);
        }
    }
}
int main()
{
    int t,n,k,a,b;
    string op;
    cin>>t;
    while(t--)
    {
        int flag=true;
        vector< pair<int,int> >p;
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            vis[i]=0;
            vec[i].clear();
        }
        for(int i=1;i<=k;i++)
        {
            cin>>a>>op>>b;
            if(op=="=")
            {
                vec[a].push_back(b);
               // vec[b].push_back(a);
            }
            else
            {
                p.push_back({a,b});
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                c++;
                dfs(i);
            }
        }
        for(int i=1;i<=p.size();i++)
        {
            a=p[i].first;
            b=p[i].second;
            if(cc[a]==cc[b])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
          cout<<"NO"<<endl;
        }

    }
}
