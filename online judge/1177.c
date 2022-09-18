#include<stdio.h>
int main()
{
    int i,n,N[100],j;
    scanf("%d",&n);
    for(i=0,j=0;i<20;i++)
    {

            printf("N[%d] = %d\n",i,j);
            j++;
            if(j==n)
                j=0;
    }

}
