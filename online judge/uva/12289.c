#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,l;
    char s[10];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       scanf("%s",&s) ;
       l=strlen(s);
       if(l==3||l==5)
       {
           if(s[0] =='o'&&s[1]=='n'&& s[2] == 'e' || s[0] == 'o' && s[1] == 'n' ||

        s[0] == 'o' && s[2] == 'e' ||s[1] == 'n' && s[2] == 'e')

        printf("1\n");
           else if(s[0] == 't' && s[1] == 'w' && s[2] == 'o'||s[0] == 't' && s[1] == 'w'

        ||s[0] == 't' && s[2] == 'o'||s[1] == 'w' && s[2] == 'o' )
        printf("2\n");
        else
            printf("3");

       }

    }
}
