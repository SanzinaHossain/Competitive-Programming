#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2="hello";
    int i,j=0,len,count=0;
    cin>>str1;
    len=str1.size();
    for(i=0;i<len;i++)
    {
        if(str1[i]==str2[j])
        {
            j++;
            count++;
        }
        if(count==5)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
