#include<bits/stdc++.h>
using namespace std;
long long n=100001;
vector<long long> vec(100001);
int main()
{
    long long t;
    cin>>t;
    for(int i=1;i<=n;i++)
    {
        if(i%10==2 || i%10==3 || i%10==9)
            {
                vec[i]=1;
            }
    }
     for(int i=1;i<=n;i++)
    {
         vec[i]=vec[i]+vec[i-1];
    }
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        cout<<vec[r]-vec[l-1]<<endl;
    }
}
