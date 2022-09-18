#include<bits/stdc++.h>
using namespace std;
int lcs(char* x,char* y,int m,int n);
int main()
{
    char x[100],y[100];
    cin>>x;
    cin>>y;
    int m=strlen(x);
    int n=strlen(y);
    cout<<"LCS length: "<<endl<<lcs(x,y,m,n)<<endl;
    return 0;
}
int lcs(char* x,char* y,int m,int n)
{
    int  l[m+1][n+1];
    int i,j;
    for(i=0;i<=m;i++)
    {
        l[i][0]=0;
    }
    for(j=0;j<=n;j++)
    {
        l[0][j]=0;
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {

            if(x[i-1]==y[j-1])
            {
                 l[i][j]=l[i-1][j-1]+1;
                 cout<<l[i][j]<<' ';
            }
            else
            {
                l[i][j]=max(l[i-1][j],l[i][j-1]);
                cout<<l[i][j]<<' ';
            }

        }
        cout<<endl;


    }
    return l[m][n];
}

