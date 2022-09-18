#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[1001],b[1001];
    double sum=0.0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j>=i;j++)
        {
             cout<<a[i]<<' '<<b[i]<<' '<<a[j]<<' '<<b[j]<<endl;
            sum=sum+(sqrt(pow((a[i]-a[j]),2) + pow((b[i]-b[j]),2)));
            break;
        }
    }
    cout<<sum;
}
