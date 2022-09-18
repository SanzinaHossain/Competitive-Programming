#include<bits/stdc++.h>
using namespace std;
void quicksort(int ar[],int p,int r);
int partition(int ar[],int p,int r);
int n;
int main()
{
    int i,j,ar[100],q;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    quicksort(ar,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<' ';
    }

}
void quicksort(int ar[],int p,int r)
{
    if(p<r)
    {
       int  q=partition(ar,p,r);
        quicksort(ar,p,q-1);
        quicksort(ar,q+1,r);
    }
}
int partition(int ar[],int p,int r)
{
   int pivort=ar[r];
   int i=p-1;
   int j;
   for(j=p;j<=(r-1);j++)
   {
       if(ar[j]<pivort)
       {
              i++;
              swap(ar[i],ar[j]);
              for(int k=0;k<n;k++)
              {
                  cout<<ar[k]<<' ';
              }
              cout<<endl;
       }
       cout<<"no change"<<endl;
   }
   swap(ar[i+1],ar[j]);
   return i+1;
}
