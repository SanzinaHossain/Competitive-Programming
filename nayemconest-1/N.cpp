#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    float mean,i=0.0,sum=0.0;
  while(cin>>n)
  {
      sum=sum+n;
      i++;
  }
  mean=sum/i;
   printf("%.4f",mean);
}
