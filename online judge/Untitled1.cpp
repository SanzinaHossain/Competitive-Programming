#include<iostream>
using namespace std;
class AccessSpecifier
{

public:
    double n,m;
    AccessSpecifier(double m,double n)
    {
        cout<<m<<endl<<n;
    }
};
int main()
{
    AccessSpecifier val(3.5,6.5);
    return 0;
}
