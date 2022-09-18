#include<bits/stdc++.h>
using namespace std;
long long freq[100001];
int main()
{
    long long n,k,d,t;
    cin>>t;
    while(t--)
   {
    cin>>n>>k>>d;
    vector<long long> v(n);
    for(auto &el: v)
    {
        cin >> el;
        freq[el]=0;
    }
    set<long long> s;
    for(int i=0;i<d;i++)
    {
        s.insert(v[i]);
        freq[v[i]]++;
    }
    long long ans=s.size();
    for(int i=d;i<n;i++)
    {
        s.insert(v[i]);
        freq[v[i]]++;

    if(freq[v[i-d]]==1)
    {
        s.erase(v[i-d]);
        freq[v[i-d]]=0;
    }
    else
    {
        freq[v[i-d]]--;
    }
    ans=min(ans,(long long)s.size());
    }
    cout<<ans<<endl;
   }
}

