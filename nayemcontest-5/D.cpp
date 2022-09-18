#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,l,r,ans=0;
    cin>>n>>k;
    vector<long long> vec(n);
    for(auto &el:vec)
    {
        cin>>el;
    }
    sort(rbegin(vec),rend(vec));
    vector<long long> vec1(n+2);
    for(int i=0;i<k;i++)
    {
        cin>>l>>r;
        vec1[l]++;
        vec1[r+1]--;

    }
    vector<long long> x;
   for(int i=1;i<=n;i++)
   {
       vec1[i]=vec1[i]+vec1[i-1];
      x.push_back(vec1[i]);
   }
   sort(rbegin(x),rend(x));
    for(int i=0;i<n;i++)
    {
        ans=ans+(vec[i]*x[i]);
    }
    cout<<ans<<endl;
    return 0;
}
