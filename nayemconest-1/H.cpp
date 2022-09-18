#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[101],b[101],i,j,count=0,k=0,c[101];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }

    for(i=0;i<n;i++)
    {
        int f=0;
        for(j=0;j<m;j++)
        {
            if(a[i]!=b[j])
            {
                f++;
            }
        }
        if(f==m)
            {
                c[k]=a[i];
                k++;
            }
    }
    cout<<k<<endl;
    for(i=0;i<k;i++)
    {
        cout<<c[i]<<' ';
    }
}
