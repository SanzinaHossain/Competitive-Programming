#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>prime;
void sieve(ll n)
{
    vector<bool>iscomp(n+1);
    for(int i=2;i*i<=n;i++)
    {
        if(iscomp[i]) continue;
        for(int j=2*i;j<=n;j+=i)
        {
            iscomp[j]=true;
        }

    }
     prime.push_back(2);
     for(int i=3;i<=n;i=i+2)
     {
         if(iscomp[i]==0)
         {
             prime.push_back(i);
         }
     }
}
int main()
{
    sieve(45);
   for(auto el:prime)
   {
       cout<<el<<' ';
   }
}

