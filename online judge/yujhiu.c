#include <iostream>
using namespace std;

class A {
    int i;
    public:
        friend void set(A, int);
};

void set(A Ob, int x) {
    Ob.i = x;
}

int main() {
    A ob;
    set(ob, 6);
    return 0;
}
