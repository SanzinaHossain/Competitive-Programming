#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,len;
    char str[2000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        len=strlen(str);
        if((strcmp(str,"1")==0)||(strcmp(str,"4")==0)||(strcmp(str,"78")==0))
            printf("+\n");
        else if((str[len-1]=='5')&&(str[len-2]=='3'))
        {
            printf("-\n");
        }
        else if((str[0]=='9') && (str[len-1]=='4'))
                {
                    printf("*\n");
                }
        else if((str[0]=='1')&&(str[1]=='9')&&(str[2]=='0'))
                {
                    printf("?\n");
                }
        else
            {
                printf("+\n");
            }
    }
    return 0;

}
