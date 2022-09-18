#include <bits/stdc++.h>
using namespace std;
int main()
 {
      int f[26]={},cnt=0;
      char s[1005];
      scanf("%s",s);
      cout<<s<<endl;
      for (int i=0;s[i];i++)
      {
          cout<<s[i]-'a'<<' ';
          cout<<f[s[i]-'a']++<<endl;
      }
      //cout<<"finish"<<endl;
      for (int i=0;i<26;i++)
      {

          cnt=cnt+f[i];
          //cout<<f[i]<<' '<<cnt<<endl;
      }
      printf("%s\n",cnt&&cnt%2==0?"Second":"First");
    }
