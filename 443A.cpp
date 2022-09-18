#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0,i,l;
    char str[1001];
    gets(str);
    l=strlen(str);
    sort(str,str+l);
    //cout<<str<<endl;
    for(i=0;i<l;i++)
    {
        if((str[i]>96&&str[i]<123))
       {
           count++;
        if(str[i]==str[i+1])
        {
            count--;
        }
       }
    }
    cout<<count;
}
