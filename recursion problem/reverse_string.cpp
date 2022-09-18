#include<bits/stdc++.h>
using namespace std;
int n;
string s;
string rev(int pos)
{
    if(pos<0)
    {
        return " ";
    }
    return s[pos]+rev(pos-1);
}
int main()
{
    cin>>n>>s;
    string x=rev(n-1);
    cout<<x<<endl;
}

