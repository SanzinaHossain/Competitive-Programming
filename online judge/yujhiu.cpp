#include <iostream>
using namespace std;

class A {
    int i;
    public:
        friend void set(ob, int x);
};

void set(A Ob, int x) {
    Ob.i = x;
    cout<<x;
}

int main() {
    A ob;
    set(ob, 6);
    return 0;
}
