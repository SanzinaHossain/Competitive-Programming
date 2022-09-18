#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a;
      if(a>10)
      {
          printf("%d %d\n",(a-10),a-(a-10));
      }
      else
      {
          printf("0 %d\n",a);
      }
    }
    return 0;
}
