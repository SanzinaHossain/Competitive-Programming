#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,l,r,sum=0;
    cin>>n;
    vector<long long> vec(n),vec1(n);
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
        sum=sum+vec[i];
        vec1[i]=sum;
    }
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>l>>r;
        cout<<vec1[r+1]-vec1[l]<<endl;
    }
    return 0;
}
