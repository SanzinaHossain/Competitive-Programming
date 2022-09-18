#include<iostream>
using namespace std;
class AccessSpecifier
{
    int m;
public:
    double n;
    void display()
    {
        cout<<m<<endl;
    }
};
int main()
{
    AccessSpecifier val;
    val.display();
    val.n=6.5;
    return 0;
}
