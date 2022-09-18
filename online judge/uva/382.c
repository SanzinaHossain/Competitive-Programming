#include<stdio.h>
int main()
{

    int n,i;
    printf("PERFECTION OUTPUT\n");
    while((scanf("%d",&n)==1))
        {
            if(n==0)
            {
            break;
            }

        int temp=n,sum =0;
        for(i=1;i<=n/2;i++)
            {
            if(temp%i == 0)
               sum+=i;
            }
        if(n == sum)
            printf("%5d  PERFECT\n",n);
else if(sum > n)
           printf("%5d  ABUNDANT\n",n);
else if(sum <n)
           printf("%5d  DEFICIENT\n",n);
            }

    printf("END OF OUTPUT\n");
    return 0;
}
