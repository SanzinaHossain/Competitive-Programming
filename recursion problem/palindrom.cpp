#include<bits/stdc++.h>
using namespace std;
int n;
string s;
bool palindrom(int i,int j)
{
    if(i>=j)
    {
        return true;
    }
    if(s[i]!=s[j])
    {
        return false;
    }
    else{
        return palindrom(i+1,j-1);
    }
}
int main()
{
    cin>>n>>s;
    cout<<palindrom(0,n-1)<<endl;
}
