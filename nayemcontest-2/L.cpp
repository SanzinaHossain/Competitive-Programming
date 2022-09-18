#include<bits/stdc++.h>
using namespace std;
int freq[1010000];
int main()
{
    int n,k,d,t;
    cin>>t;
    while(t--)
   {
    cin>>n>>k>>d;
    vector<int> v(n);
    for(auto &el: v)
    {
        cin >> el;
        freq[el]=0;
    }
    set<int> s;
    for(int i=0;i<d;i++)
    {
        s.insert(v[i]);
        freq[v[i]]++;
    }
    int ans=s.size();
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
    ans=min(ans,(int)s.size());
    }
    cout<<ans<<endl;
   }
}
