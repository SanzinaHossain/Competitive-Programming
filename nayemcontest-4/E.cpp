#include<bits/stdc++.h>
using namespace std;
int shorna(int n)
{

    if(n==0)
    {
        return 0;
    }
    if(n>0)
    {
        return shorna(n-1)+n;
    }

}
int main()
{
    int n;
    cin>>n;
    cout<<shorna(n);
}



