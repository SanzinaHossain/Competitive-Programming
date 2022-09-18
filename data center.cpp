#include<bits/stdc++.h>
using namespace std;
int fun(int area);
int main()
{
  long long  int area,i,s,k,j,count=0;
    cin>>area;
for(k=2;k<area;k++)
    {
        if(area%k==0)
        {
           count++;
            break;
         }
    }
   if(count!=0)
        {
            int sm =fun(area);
            cout<<sm;
        }
        else{
                       int peri=(area+1)*2;
                       cout<<peri;
        }
}
int fun(int area)
{

 int i=sqrt(area);
    int  s=i*i;
    if(s==area)
    {
        return (i*4);
    }
    else{
       long long  int row=area/i;

    long long   int peri=2*(i+row);
        if(area%i!=0)
        {
            peri=peri+2;
            return peri;
        }
        return peri;
    }
}
