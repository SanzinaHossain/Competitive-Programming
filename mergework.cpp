#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a[100],b[100],c[100],n,m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(j=0;j<m;j++)
    {
        cin>>b[j];
    }
        i=0;
        j=0;
    int k=0;
    while(k<n && k<m)
    {

      if(a[i]<b[j])
      {
          c[k]=a[i];
          i++;
      }
      else
      {
             c[k]=b[j];
              j++;

      }
      k++;


    }
   while (i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j<m)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    for(int i=0;i<n+m;i++)
    {
        cout<<c[i]<<' ';
    }
}
