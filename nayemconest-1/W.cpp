#include<bits/stdc++.h>>
using namespace std;
using std::string;
int main()
{
    string str[1001];
    string s,ss;
    int n,l=0,i=0,j;
    cin>>n;
   for(i=0;i<n;i++)
        {
           cin>>s;
           str[i]=s;


        }
   sort(str,str+n,greater<string>());

    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=i+1;j<n;j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if(l<count)
        {
            l=count;
            ss=str[i];

        }
    }
    if(l==0)
    {
        cout<<str[0]<<' '<<l+1;
    }
    else{
    cout<<ss<<' '<<l+1;
    }

}
