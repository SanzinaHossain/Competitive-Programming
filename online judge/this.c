#include <bits/stdc++.h>
using namespace std;

class Student {
    string name;
    int id;
    public:
        Student(string name, int id) {
            this->name = name;
            this->id = id;
        }

        Student* return_me() {
            return this;
        }

        void print_info() {
            cout << "Name: " << this->name << endl;
            cout << "Id: " << this->id << endl;
        }
};


int main() {

    Student s1("Naimul", 181065);
    Student *s = s1.return_me();
    s->print_info();

    return 0;
}
