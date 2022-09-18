#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for(auto &el:vec)
    {
        cin>>el;
    }
    multiset<int> s;
    int i=0,j=0,ans=0;
    while(i<n)
    {
        while(j<n && (s.size()==0 || ((abs(*s.begin()-vec[j])<=1) && (abs(*s.rbegin()-vec[j])<=1))))
        {
            s.insert(vec[j]);
            j++;
        }
        ans=max(ans,j-i);
        s.erase(s.find(vec[i]));
        i++;
    }
    cout<<ans<<endl;
}
