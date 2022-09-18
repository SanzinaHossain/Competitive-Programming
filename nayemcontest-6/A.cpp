#include<bits/stdc++.h>
using namespace std;
long long func(long long x)
{
        return x*(x+1)/2;

}
int main()
{
    long long t;
    while(cin>>t)
   {

     while(t--)
    {
        long long n;
        cin>>n;
        long long high=1e9,low=0,res=-1;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            if( n>=func(mid))
            {
                 res=mid;
                low=mid+1;

            }
            else
            {
                high=mid-1;
            }
        }
        cout<<res<<endl;
    }
}
}
