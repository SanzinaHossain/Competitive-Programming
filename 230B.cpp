#include<bits/stdc++.h>
using namespace std;
int ar[10000000];
int main()
{
    ar[0]=ar[1]=1;
    for(int i=2;i*i<=10000000;i++)
    {
        if(ar[i]==0)
        {
            for(int j=2;j*j<=10000000;j++)
            {
                ar[i*j]=1;
            }
        }
    }
    int n,t;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long int m;
        cin>>m;
        int t=sqrt(m);
       if(t==sqrt(m) && ar[t]==0)
       {
           cout<<"YES"<<endl;
       }
       else
       {

           cout<<"NO"<<endl;
       }
    }
}
