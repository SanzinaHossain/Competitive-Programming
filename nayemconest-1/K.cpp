#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ar[100],i;
    ar[0]=1,ar[1]=1;
    cin>>n;
 for(i=2;i<=n;i++)
 {
      ar[i]=ar[i-1]+ar[i-2];
 }
 cout<<ar[n];
}

