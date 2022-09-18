#include<bits/stdc++.h>
using namespace std;
int main()
{
    int area;
    cin>>area;
    for(i=2;i<=area;i++)
    {
        if(area%i==0)
        {
            cout<<i<<endl;
        }
    }
}
