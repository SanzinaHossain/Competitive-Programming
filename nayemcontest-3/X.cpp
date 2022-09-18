#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> vec(n);
        for(auto &el:vec)
        {
            cin>>el;
        }
       sort(begin(vec),end(vec));
        int begin=0,end=n-1,ans=0;
        while(begin<end)
        {
             int sum=0;
             sum=vec[begin]+vec[end];
             if(sum==k)
             {
                 ans++;
                 begin++;
                 end--;
             }
             else if(sum<k)
             {
                 begin++;
             }
             else if(sum>k)
             {
                 end--;
             }
        }
        cout<<ans<<endl;
}
}
