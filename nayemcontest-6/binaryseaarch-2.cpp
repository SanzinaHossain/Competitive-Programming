#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,high,low,mid,i,j;
    cin>>n;
    vector<int> vec(n);
    for(i=1;i<=n;i++)
    {
        cin>>vec[i];
    }
    cin>>k;
    if(binary_search(begin(vec),end(vec),k))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}
