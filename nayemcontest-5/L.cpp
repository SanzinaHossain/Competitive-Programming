#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int m=1;m<=t;m++)
    {

       int n,q;
        scanf("%d%d",&n,&q);
        vector<pair<int,int> > v(n);
        vector<int> up;
        vector<int> qu(q);
        for(int i=0;i<n;i++)
        {
           scanf("%d%d",&v[i].first,&v[i].second);
            up.push_back(v[i].first);
            up.push_back(v[i].second);
        }
        for(int i=0;i<q;i++)
        {
            scanf("%d",&qu[i]);
            up.push_back(qu[i]);
        }
        sort(begin(up),end(up));
        up.erase(unique(begin(up),end(up)),end(up));
        long long k=1;
        map<int,int>mp;
        for(auto &el:up)
        {
            mp[el]=k;
            k++;
        }
        for(auto &el:v)
        {
            el.first=mp[el.first];
            el.second=mp[el.second];
        }
        for( auto &el:qu)
        {
            el=mp[el];
        }
        vector<int>pre(k+1);
        for(auto &el:v)
        {
            pre[el.first]++;
            pre[el.second+1]--;
        }
        for(int i=1;i<=k;i++)
        {
            pre[i]=pre[i]+pre[i-1];
        }
        printf("Case %d:\n",m);
        for(auto &el:qu)
        {
            printf("%d\n",pre[el]);
        }
    }
}
