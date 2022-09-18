#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,p,r,ar[100],b[100],c[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int max=ar[0];
    for(i=0;i<n;i++)
    {
        if(max<ar[i])
        {
            max=ar[i];
        }
    }
    int min=ar[0];
    for(i=0;i<n;i++)
    {
        if(min>ar[i])
        {
            min=ar[i];
        }
    }
    cout<<max<<' '<<min<<endl;
    int sum=0;
    for(i=min;i<=max;i++)
        {
        sum=sum+count(ar,ar+n,i)<<' ';
        b[i]=sum;
        cout<<sum<<' ';

    }
    for(i=0;i<n;i++)
    {
        for(j=min;j<=max;j++)
        {
            if(ar[i]==j)
            {
                c[b[j]]=ar[i];
                b[j]--;
            }
        }
    }
    cout<<endl;
    for( i=1;i<=n;i++)
    {
        cout<<c[i]<<' ';
    }



}
