#include<bits/stdc++.h>
using namespace std;
int main()
{

    int d=0,t,sum=0;
    char str[100];
    scanf("%d",&t);
    while(t--)
    {

        scanf("%s",str);
        if(strcmp(str,"denote")==0)
        {
            scanf("%d",&d);
            sum=sum+d;
            cout<<sum<<endl;
        }
        else
            cout<<d<<endl;
    }
    return 0;
}
