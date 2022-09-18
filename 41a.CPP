#include<bits/stdc++.h>
#include<string.h>
using namespace std;
char str1[101],str2[101];
string str3;
int main()
{
    //char str1[101],str2[101],str3[101];
    cin>>str1>>str2;
    str3=strrev(str1);
    //cout<<str3<<endl;
    if(str3==str2)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;

}
