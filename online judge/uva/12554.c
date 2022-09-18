#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,i,temp,temp2;
    char name[101][101];
    char song[16][10]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","SHORNA","Happy","birthday","to","you"};
    scanf("%d",&t);
    for (i=0;i<t;i++)
    {
        scanf("%s",name[i]);
    }
    if (t%16==0) n=t/16;
    else n=(t/16)+1;
    n=n*16;
    for (i=0;i<16;i++)
    {
        temp=i%t;
        temp2=i;
        printf("%s: %s\n",name[temp],song[temp2]);
    }
    return 0;
}
