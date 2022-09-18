#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ar[100];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        ar[i]=i;
    }
    sort(ar,ar+n);
    do {
       for(i=0;i<n;i++)
       {
           cout<<ar[i]<<' ';
       }
  } while ( next_permutation(ar,ar+n) );
}
