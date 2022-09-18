#include<bits/stdc++.h>
using namespace std;
void shorna(int n)
{
    static int n1=1,n2=1,n3;
    if(n>0)
    {
         n3 = n1 + n2;
         n1 = n2;
         n2 = n3;
        cout<<n3<<endl;
        shorna(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<1<<endl<<1<<endl;
    shorna(n-2);
    return 0;
 }
