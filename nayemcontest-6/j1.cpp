#include<bits/stdc++.h>
using namespace std;
long long n,k,high,low,mid,x;
long long binary(long long x)
   {

      low=0;
      high=n;

    while(low<=high)
        {
            mid=(low+high)/2;
            if(x==mid)
            {
                return mid;
            }
            else if(k<mid)
            {
                high=mid-1;
            }
            else if(k>mid)
            {
                low=mid+1;
            }
        }
   }
int main()
{
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    while(k>0 && cin>>x)
    {
        long long pos=-1;
        pos=binary(x);
        if(pos==-1)
        {
            cout<<-1<<endl;
        }
        else

        {
            cout<<pos<<endl;
        }


    }
}
