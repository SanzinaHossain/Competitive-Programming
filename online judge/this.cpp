#include <bits/stdc++.h>
using namespace std;

class Student {
    string name;
    int id;
    public:
        Student(string name, int id) {
             name="shorna";
             id=181267;
        }

        void print_info() {
            cout << "Name: " << s.name << endl;
            cout << "Id: " << s.id << endl;
        }
};


int main() {

    Student s1;
    Student *s =print_info(&s1);

    return 0;
}
