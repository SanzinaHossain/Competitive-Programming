#include<bits/stdc++.h>
using namespace std;
vector<int>vec[100007];
vector<int>res;
int in[100008];
bool khans(int n)
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
    if(res.size()==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    int n,m,x,y;
    cin>>n>>m;
    while(m--)
    {
        cin>>x>>y;
        vec[x].push_back(y);
        in[y]++;
    }
    if(khans(n)==false)
       {
           cout<<"Sandro fails."<<endl;
       }
    else
    {
            for(auto it:res)
    {
        cout<<it<<' ';
    }
    }
}

