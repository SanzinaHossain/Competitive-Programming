#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,x;
     set<long long int>s;
     cin>>t;
     while(t--)
     {
         cin>>n;
         for(int i=0;i<n;i++)
         {
             cin>>x;
             s.insert(x);
         }
     }
     cout<<s.size();
}
