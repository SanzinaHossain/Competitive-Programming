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
void output(int k)
{
    if(k==0)
    {
        return;
    }
    output (k-1);
    cout<<arr[k]<<' ';
}
void rev(int x,int baki)
{
    if(baki==0)
    {
        return;
    }
    cout<<arr[x]<<' ';
    rev (x-1,baki-1);

}
int main()
{
    int n,k;
    cin>>n>>k;
    input(n);
    output(k);
    cout<<endl;
    rev(n,k);
}

