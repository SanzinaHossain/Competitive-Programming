#include<bits/stdc++.h>
using namespace std;
int main()
{
   char str[6];
   int i=0;
while(1)
{
    gets(str);
    if(str[0]=='*')
        {
            break;
        }
    else if(str[0]=='H')
        {
            printf("Case %d: Hajj-e-Akbar\n",++i);
        }
    if(str[0]=='U')
        {
            printf("Case %d: Hajj-e-Asghar\n",++i);
        }
}
return 0;
}
