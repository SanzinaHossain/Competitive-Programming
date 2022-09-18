#include<stdio.h>
int main()
{
    float A,B,C,X;
    while (3==scanf("%f%f%f",&A,&B,&C))
    {
       X=((A*2)+(B*3)+(C*5))/(2+3+5);
       printf("MEDIA = %.1f\n", X);
    }
       return 0;
}
