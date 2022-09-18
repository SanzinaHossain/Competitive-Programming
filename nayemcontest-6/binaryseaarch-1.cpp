#include<bits/stdc++.h>
using namespace std;
bool binary(int k);
int main()
{
    int n,k,high,low,mid,i,j;
    cin>>n;
    vector<int> vec(n);
    for(i=1;i<=n;i++)
    {
        cin>>vec[i];
    }
    cin>>k;
    low=1;
    high=n;
    while(low<=high)
        {
            mid=(low+high)/2;
            if(k==mid)
            {
                cout<<"yes"<<endl;
                return 0;
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
        cout<<"no"<<endl;
}

