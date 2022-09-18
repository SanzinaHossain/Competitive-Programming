#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,sum=0;
    string str;
    scanf("%d",&t);

        while(t--)
        {
        scanf("%s",str);
        if(str=="denote")
        {
            scanf("%d",&n);
            sum=sum+n;

        }
        scanf("%s",str);
         if(str=="report")
        {

          printf("%d\n",sum);
       }

}

    return 0;
}
