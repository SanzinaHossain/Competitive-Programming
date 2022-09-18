#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    scanf("%lld%lld",&n,&k);
    vector<long long int >vec(n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&vec[i]);
    }
    while(k--)
    {
        long long int x;
         scanf("%lld",&x);
      if(binary_search(begin(vec),end(vec),x))
      {
          auto it=lower_bound(begin(vec),end(vec),x)-begin(vec);
          printf("%d\n",it);
      }
      else
      {
         printf("%d\n",-1);
      }

    }
}

