#include<bits/stdc++.h>
using namespace std;
int n,wt[100],pr[100],w;
int knapsack(int wt[],int pr[],int w,int n)
{
    if(n==0 || w==0)
    {
        return 0;
    }
    if(wt[n]>w)
    {
        return knapsack(wt,pr,w,n-1);
    }
    else
    {
        return max(knapsack(wt,pr,w,n-1),(pr[n]+knapsack(wt,pr,w-wt[n],n-1)));
    }
}
int main()
{
    cin>>n>>w;
    for(int i=1;i<=n;i++)
    {
        cin>>wt[i]>>pr[i];
    }
    int k;
    k=knapsack(wt,pr,w,n);
    cout<<k<<endl;

}
