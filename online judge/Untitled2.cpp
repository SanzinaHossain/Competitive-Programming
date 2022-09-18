#include<iostream>
using namespace std;
class Same
{
    public:
        int i;
        int Samer()
        {
            return 1;
        }
};
        int simple(Same &obj1)
        {
            obj1.Samer();
        }

int main()
{
    Same obj1;
    int i=simple(obj1);
    //cout<<i;

    return 0;
}
