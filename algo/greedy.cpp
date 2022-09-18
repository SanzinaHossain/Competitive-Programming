// IIUC CSE DEPT //
//SANZINA HOSSAIN SHORNA//
// date: 21-01-2020//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,k=0,p=0;
    float ar[100],sum=0.0,s,w[100],v[100];
    cin>>m>>n;
    for(i=0;i<n;i++)
    {
        cin>>w[i]>>v[i];
        ar[i]=v[i]/w[i];
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]<ar[j])
            {
                swap(ar[i],ar[j]);
                swap(v[i],v[j]);
                swap(w[i],w[j]);


            }
        }
    }

    while(m>0)
    {
        if(w[p]==m)
        {
            sum=sum+v[p];
            cout<<sum;
            return 0;
        }
        else if(w[p]<m)
        {
            sum=sum+v[p];
            m=m-w[p];
            p++;

        }
        else if(w[p]>m)
        {
            s=(v[p]*m)/w[p];

            sum=sum+s;
            cout<<sum;
            return 0;
        }
    }
    cout<<sum;
}
