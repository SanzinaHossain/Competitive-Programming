// IIUC CSE DEPT //
//SANZINA HOSSAIN SHORNA//
// date: 11-02-2020//

#include<bits/stdc++.h>
using namespace std;
int activities (int a[],int b[],int n);
int main()
{
    int n,a[100],b[100],k,i,j;
    cin>>n;
    for(k=1;k<=n;k++)
    {
        cin>>a[k];
    }
    for(k=1;k<=n;k++)
    {
        cin>>b[k];
    }
    for(i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(b[i]>b[j])
            {
                swap(b[i],b[j]);
                swap(a[i],a[j]);
            }
        }
    }
    activities(a,b,n);
}
int activities (int a[], int b[], int n)
{
    int i,j;
    for(int k=1;k<=n;k++)
     {
         i=k;
       cout<<"For start ="<<i<<endl<<" selected activity: "<<"A"<<i<<' ';
    for(j=i+1;j<=n;j++)
    {
        if(a[j]>=b[i])
        {
            cout<<"A"<<j<<' ';
            i=j;
        }
    }
    cout<<endl;
     }

}
