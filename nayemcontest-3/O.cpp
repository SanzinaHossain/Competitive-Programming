#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    vector<long long int> vec(n);
    for( auto &el:vec)
    {
        cin>>el;
    }
    long long int begin =0,end=0,sum=0,ans=0;
    while(begin<n)
    {
        while(end<n && sum+vec[end]<k)
        {
            sum=sum+vec[end];
            end++;
        }
        ans =ans+n-end;
        sum =sum-vec[begin];
        begin++;

    }
    cout<<ans;
}
