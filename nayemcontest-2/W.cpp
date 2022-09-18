#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,sum=0,mn,l,m;
    cin>>n>>k;
    vector<long long> vec(n);
    for(auto &el:vec)
    {
        cin>>el;
    }
  for(int i=0;i<k;i++)
   {
      sum=sum+vec[i];
   }
   l=1;
   mn=sum;
   for(int i=k;i<n;i++)
   {
      sum=sum+vec[i];
      sum=sum-vec[i-k];
     if(mn>sum)
     {
         mn=sum;
         l=i-k+2;
     }

   }
   cout<<l;
   return 0;

}
