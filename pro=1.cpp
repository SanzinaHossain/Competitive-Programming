#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i,h,w;
   cin>>x;
   for(i=2;i<=x;i++)
   {
       if(x%i==0)
       {
           h=i;
           w=x/i;
           break;
       }
   }
   cout<<h<<" "<<w;
}
