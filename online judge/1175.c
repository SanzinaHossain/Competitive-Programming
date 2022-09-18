#include<stdio.h>
int main()
{
    int i,j,A[100],temp;
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0,j=9;i<10;i++,j--)
    {

            temp=A[i];
            A[i]=A[j];
            A[j]=temp;

    }
    for(i=0;i<10;i++)
    {
        printf("A[%d] = %d\n",i,A[i]);
    }
}
