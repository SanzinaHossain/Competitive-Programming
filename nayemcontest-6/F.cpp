#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,q,l,r,k,j;
    scanf("%lld",&t);
  for( j=1;j<=t;j++)
    {
        scanf("%lld%lld",&n,&q);
        vector<long long>vec(n);
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&vec[i]);
        }
        printf("Case %lld:\n",j);

        while(q--)
        {
            scanf("%lld%lld",&l,&r);
            auto it1=lower_bound(begin(vec),end(vec),l);
            auto it2=upper_bound(begin(vec),end(vec),r);
            k=it2-it1;
            printf("%lld\n",k);
        }
    }

}
