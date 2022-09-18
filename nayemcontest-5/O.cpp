#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long> v(n+1),vec(n+1);
  for(int i=1;i<=n;i++)
  {
      cin>>v[i];
      vec[i]=v[i];
      v[i]=v[i]+v[i-1];
  }
  sort(begin(vec),end(vec));
  for(int i=1;i<=n;i++)
  {
      vec[i]=vec[i]+vec[i-1];
  }
  long long m;
  cin>>m;
  while(m--)
  {
      long long t,l,r;
      cin>>t>>l>>r;
      if(t==1)
      {
          cout<<v[r]-v[l-1]<<endl;
      }
      else
      {
          cout<<vec[r]-vec[l-1]<<endl;
      }

  }
}
