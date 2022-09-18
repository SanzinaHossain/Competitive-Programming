#include<bits/stdc++.h>
using namespace std;
bool comp(pair<long long int,long long int> &a ,pair<long long int,long long int> &b)
{
       if(a.first==b.first)
         {
             return (a.second>b.second);
         }
       else
         {
             return(a.first<b.first);
         }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       vector<pair<long long int,long long int> > v;
        long long int  n,x,y;
       scanf("%lld",&n);
        for (int i=0; i<n; i++)
        {
            scanf("%lld%lld",&x,&y);
            v.push_back({x,y});
        }
        sort(begin(v), end(v), comp);

       for (auto el:v)
      {
         printf("%lld %lld\n",el.first,el.second);
      }
    }
    return 0;

}
