#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt;
    cin>>n;
    vector<  pair <int ,int > >vec;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cnt=0;
           while(n%i==0)
           {
               n=n/i;
               cnt++;
           }
          vec.push_back({i, cnt});
        }

    }
    if(n>1)
    {
         vec.push_back({n, 1});
    }
    for(auto el:vec){
        cout<<el.first<<"^"<<el.second<<endl;
    }

}
