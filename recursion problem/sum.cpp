#include<bits/stdc++.h>
using namespace std;
int arr[100];
void input(int n)
{
    if(n==0)
    {
        return;
    }
    input(n-1);
    cin>>arr[n];

}
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (sum(n-1)+arr[n]);
}
int main()
{
    int n;
    cin>>n;
    input(n);
    cout<<sum(n)<<endl;
}

