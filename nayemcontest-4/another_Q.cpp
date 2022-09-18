#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long n,max,min,count=0,i,m=0,p=0,sum=0;
        cin>>n;
        long long ar[n+1];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
         max=ar[n-1];
        for(i=n-1;i>=0;i--)
        {
            if(max<=ar[i])
            {
                max=ar[i];
                m++;
            }
            else
            {
                break;
            }
        }
        min=ar[0];
         for(i=0;i<n;i++)
           {

               if(min>=ar[i])
            {
                min=ar[i];
                p++;
            }
            else
            {
                break;
            }
           }
           if(max==min)
        {
           for(i=n-1;i>0;i--)
           {
               sum=sum+i;
           }
        }
        else

        {
            sum=m*p;
        }
        cout<<max-min<<' '<<sum<<endl;
}
