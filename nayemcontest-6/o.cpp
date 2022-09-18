#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    vector<ll>vec(n+1),vec1(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
        vec1[i]=vec[i];
    }
    for(int i=1;i<=n;i++)
    {
        vec[i]=vec[i]+vec[i-1];
    }


    for(int i=n-1;i>0;i--)
    {
        vec1[i]=vec1[i+1]+vec1[i];

    }
    /* for(int i=1;i<=n;i++)
    {
      cout<<vec1[i]<<' ';

    }
    cout<<endl;*/
    ll high=n,low=1,res=0;
    while(low<high)
    {
        if(vec[low]==vec1[high])
        {
            res=vec[low];
           // cout<<res<<endl;
            low++;
            high--;
        }
        else if(vec[low]<vec1[high])
        {
             low++;
        }
        else if(vec[low]>vec1[high])
        {
            high--;
        }
    }
    cout<<res<<endl;
}
