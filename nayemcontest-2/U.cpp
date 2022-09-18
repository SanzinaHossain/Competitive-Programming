#include<bits/stdc++.h>
using namespace std;
bool comp(pair<long long,long long>a, pair<long long,long long>b)
{
    long long old_a=min(a.first,a.second);
    long long new_a=min(2 * a.first,a.second);

    long long old_b=min(b.first,b.second);
    long long new_b=min(2 * b.first,b.second);
    long long diff1=new_a-old_a;
    long long diff2=new_b-old_b;
    return diff1>diff2;

}
int main()
{
    long long n,f,ans=0;
    cin>>n>>f;
    vector<pair<long long,long long> >vec(n);
    for(auto &el:vec)
    {
        cin>> el.first>> el.second;
    }
    sort(begin(vec),end(vec),comp);
   for(int i=0;i<n;i++)
   {
       auto el=vec[i];
       if(i<f)
       {
           ans=ans+min(2 * el.first,el.second);
       }
       else
       {
           ans=ans+min(el.first,el.second);
       }
   }
   cout<<ans;
}
