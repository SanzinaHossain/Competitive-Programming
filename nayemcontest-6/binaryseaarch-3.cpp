#include<bits/stdc++.h>
using namespace std;
bool binary(int k);
int main()
{
    int n,k,high,low,mid,i,j;
    cin>>n;
    vector<int> vec(n);
    for(i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    cin>>k;
    auto it=lower_bound(begin(vec),end(vec),k)-begin(vec);
    cout<<it<<endl;
    /*if(*it==k)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }*/
}

