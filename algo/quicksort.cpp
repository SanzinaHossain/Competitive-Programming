#include<bits/stdc++.h>
using namespace std;
int qs(int a[],int p,int r);
int partition(int a[],int p,int r);
int a[100],i,j,count;
int main()
{
    int r,p;
   cin>>r;
    for(i=1;i<=r;i++)
    {
       cin>>a[i];
    }
    p=1;
    qs(a,p,r);
    for(i=1;i<=r;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}
int qs(int a[],int p,int r)
{
    if(p<r)
    {
       int q=partition(a,p,r);
       qs(a,p,q-1);
       qs(a,q+1,r);
    return 0;
    }
}
int partition(int a[],int p,int r)
{
    int pivot=a[r],temp=0;;
    i=p-1;
    for(j=p;j<=r-1;j++)
    {
        printf("\n a[j]=%d pivot=%d",a[j],pivot);
        if(a[j]<pivot)
        {
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            count++;
           printf("\ncount=%d\n",count);
        }
    }
    if(a[j]==pivot)
        {
            temp=a[i+1];
            a[i+1]=a[r];
            a[r]=temp;
            count++;
            printf("\ncount=%d\n",count);
        }
    return (i+1);

}
