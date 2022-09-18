#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,string>mp;
    char a[11],b[11],m[25];
    while(gets(m))
    {
        if(m[0]=='\0')
        {
            break;
        }
        sscanf(m,"%s %s",a,b);
        mp[b]=a;
    }
    while(gets(m))
    {
        if(mp.count(m)==1)
            {
                cout<<mp[m]<<endl;
            }
        else
        {
           cout<<"eh"<<endl;
        }
    }

    return 0;
}
