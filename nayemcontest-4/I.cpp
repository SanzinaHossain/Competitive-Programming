#include <bits/stdc++.h>
using namespace std;
int lcm(int a, int b)
{
    static int c = 0;
    c=c+b;
    if((c % a == 0) && (c % b == 0))
    {
        return c;
    }
    else
    {
        return lcm(a, b);
    }
}



int main()
{
    int a,b,lcmvalue;
    scanf("%d%d",&a,&b);
    if(a > b)
       {
           lcmvalue = lcm(b,a);
       }

    printf("%d",lcmvalue);

    return 0;
}


