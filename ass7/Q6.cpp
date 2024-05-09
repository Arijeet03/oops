/*6.	Write a program in C++ to overload input operator (>>) and output operator (<<).*/

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Default constructor
    Person() {
        name = "";
        age = 0;
    }

    // Parameterized constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Overloading input operator (>>)
    friend istream& operator>>(istream& in, Person& p) {
        cout << "Enter name: ";
        in >> p.name;
        cout << "Enter age: ";
        in >> p.age;
        return in;
    }

    // Overloading output operator (<<)
    friend ostream& operator<<(ostream& out, const Person& p) {
        out << "Name: " << p.name << endl;
        out << "Age: " << p.age << endl;
        return out;
    }
};

int main() {
    Person p;

    // Taking input using overloaded input operator
    cin >> p;

    // Printing output using overloaded output operator
    cout << "Person details: " << endl;
    cout << p;

    return 0;
}