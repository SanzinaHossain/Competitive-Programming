#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    char str[101];
    int l,count=0,i;
   cin.get(str,101);
   cin>>ch;
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]==tolower(ch)|| str[i]==toupper(ch))
        {
            count++;
        }
    }
    cout<<count;
}
