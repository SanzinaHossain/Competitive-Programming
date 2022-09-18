#include<stdio.h>
int main()
{
    int t,n,count=0;
    while(scanf("%d",&t),t)
    {
        count++;
        int sum=0;
        for(int i=0;i<t;i++)
        {
            scanf("%d",&n);
            if (n>0)
            {
                sum++;
            }
            else
            {
                sum--;
            }
        }
      printf("Case %d: %d\n",count,sum);
    }
return 0;
}
