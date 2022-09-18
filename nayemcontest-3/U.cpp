#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    vector<int> v1(n);
    for(auto &el:v1)
    {
        cin>>el;
    }
    cin>>m;
    vector<int> v2(m);
    for(auto &el:v2)
    {
        cin>>el;
    }
    sort(begin(v1),end(v1));
    sort(begin(v2),end(v2));
    int i=0,j=0,ans=0;
    while(i<n && j<m)
    {
        if((abs(v1[i]-v2[j]))<=1)
        {
            ans++;
            i++;
            j++;
        }
       else if(v1[i]<v2[j])
        {
            i++;
        }
        else if(v2[j]<v1[i])
        {
            j++;
        }

    }
    cout<<ans<<endl;
}
