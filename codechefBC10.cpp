#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    char str[110],str1[110];
    gets(str);
    int i=0;
    for(i=0;str[i]!=' ';++i)
    {
        str1[i]=str[i];
    }
    str1[i]='\0';
    strrev(str1);

    for(int i=0;i<strlen(str1);++i)
    {
        str[i]=str1[i];
    }
    cout<< str <<endl;
    return 0;

}
