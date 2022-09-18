#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,n,sum1=0,sum2=0,sum3=0;
    scanf("%d",&n);
   while(n--)
    {
       scanf("%d%d%d",&a,&b,&c);
        sum1+=a;
        sum2+=b;
        sum3+=c;
    }
    if(sum1==0&&sum2==0&&sum3==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }



}
