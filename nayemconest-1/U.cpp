#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,get[101],k=0,count=0;
    cin>>a>>b>>c>>d;
    if(a>b)
    {
        swap(a,b);
    }
    if(c>d)
    {
        swap(c,d);
    }
    for(i=a;i<=b;i++)
    {
        for(j=c;j<=d;j++)
        {
            get[k]=i*j;
            //cout<<get[k]<<' ';
            k++;
        }
    }
    sort(get,get+k);
    //cout<<endl<<k<<endl;
    for (int i=0; i<k; i++)
    {
        int j;
        for (j=0; j<i; j++)
        {
           if (get[i] == get[j])
              {
                  break;
              }
        }
           if (i == j)
          {
             //cout<<get[i]<<' ';
             count++;
          }
    }
    //cout<<endl;
    cout<<count;

}
