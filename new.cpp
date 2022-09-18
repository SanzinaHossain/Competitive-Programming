#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[100],i,j;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        for(i=0;i<n;i++)
       {

        for(j=i+1;j<n;j++)
        {
           if(ar[i]-ar[j]==1 || ar[j]-ar[i]==1)
           {
               count++;
           }
        }
       }
       if(count==0)
       {
           cout<<1<<endl;
       }
       else
       {
           cout<<2<<endl;
       }

}
}
