#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,count=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a==b)
        {
            count++;
        }
    }
    cout<<count;
}
