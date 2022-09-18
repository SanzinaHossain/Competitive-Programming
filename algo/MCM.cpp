#include<bits/stdc++.h>
using namespace std;
int m[100][100],s[100][100],n;
 int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    for (int L=2; L<n; L++)
    {
        for (int i=1; i<n-L+1; i++)
        {
            int j = i+L-1;
            m[i][j] = INT_MAX;

            for (int k=i; k<=j-1; k++)
            {
                int q = m[i][k] + m[k+1][j] + arr[i-1]*arr[k]*arr[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;
                    s[i][j]=k;
                }
            }
        }
    }
     cout<< "This is m table:"<<endl;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            cout<<m[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
    cout<< "This is s table:"<<endl;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            cout<<s[i][j]<<' ';
        }
        cout<<endl;
    }


}
