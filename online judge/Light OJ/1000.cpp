#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int sum=0;
        cin>>a>>b;
        if((a>=0&&a<=10)&&(b>=0 && b<=10))
        {
            sum=a+b;
            printf("Case %d: %d\n",i,sum);
        }
    }
    return 0;
}
