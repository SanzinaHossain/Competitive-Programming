#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,s,flag=0,ar[1001],i=0,k;
    cin>>n;
    temp=n;

    if(n%4==0 || n%7==0 || n%47==0 ||n%74==0 || n%447==0 ||n%474==0 ||n%744==0 ||n%747==0 ||n%444==0 ||n%777==0)
    {
        cout<<"YES";
        return 0;
    }
    else
    {
        while(temp!=0)
        {
            s=temp%10;
            ar[i]=s;
            temp=temp/10;
            i++;
        }
        k=i;
        for(i=0;i<k;i++)
        {
           if(ar[i]==7|| ar[i]==4)
           {

           }
           else
           {
               flag=1;
           }
        }
    }
    if(flag==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
