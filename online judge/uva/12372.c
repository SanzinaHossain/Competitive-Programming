#include<stdio.h>
int main()

{
    int L,w,H,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&L,&w,&H);
        if(L<=20&&w<=20&&H<=20)
            printf("Case %d: good\n",i);
        else
            printf("Case %d: bad\n",i);
    }
    return 0;

}
