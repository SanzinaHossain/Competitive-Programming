#include<bits/stdc++.h>
using namespace std;
vector<int>vec[10000];
vector<int>res;
int in[10000];
void khans(int n)
{
      priority_queue<int,vector<int>,greater<int> > q;
    for(int i=1;i<=n;i++)
    {
        if(in[i]==0)
        {
            q.push(i);
        }
    }
    while(!q.empty())
    {
        int cur=q.top();
        res.push_back(cur);
        q.pop();
        for(int it:vec[cur])
        {
            in[it]--;
            if(in[it]==0)
            {
                q.push(it);
            }
        }
    }
}
int main()
{

    int n,m,x,y,l;
    cin>>n>>m;
    while(m--)
    {
        cin>>x>>y;
        vec[x].push_back(y);
        in[y]++;
    }
    cin>>l;
    khans(n);


    auto k=lower_bound(begin(res),end(res),l)-begin(res);
    cout<<k<<endl;
}
