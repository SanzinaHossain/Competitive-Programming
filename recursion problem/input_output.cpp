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
void output(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<arr[n]<<' ';
    output (n-1);
    cout<<endl;
    cout<<arr[n]<<' ';
}
int main()
{
    int n;
    cin>>n;
    input(n);
    output(n);
}
