#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n;
    vector<long long> vec(n);
    for(auto &el:vec)
    {
        cin>>el;
    }
    cin>>k;
   multiset<long long >s;
   for(int i=0;i<k;i++)
   {
       s.insert(vec[i]);
   }
   cout<<*s.rbegin()<<' ';
   for(int i=k;i<n;i++)
   {
       s.erase(s.find(vec[i-k]));
       s.insert(vec[i]);
       cout<<*s.rbegin()<<' ';
   }

}
