#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,x,t=0,sum;
    multiset<long long int> s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
   while(s.size() != 1)
   {
       sum=0;
       long long int m=*s.begin();
       sum=sum+m;
       s.erase(s.begin());
       m=*s.begin();
       sum=sum+m;
       s.erase(s.begin());
       t=t+sum;
       s.insert(sum);
       /*for (auto it=s.begin();it!=s.end();it++)
       {
          cout <<*it<<' ';
       } */
       //cout<<endl;
   }
   cout<<t;
}
