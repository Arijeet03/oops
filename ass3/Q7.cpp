/*7.	Write a program to demonstrate the working of friend class.*/

#include <iostream>
using namespace std;

class ClassB;
class ClassA {
private:
    int a;
public:
    ClassA(int val) : a(val) {}
    void display() {
        cout << "Value of a in ClassA: " << a << endl;
    }
    friend class ClassB;
};
class ClassB {
private:
    int b;
public:
    ClassB(int val) : b(val) {}
    void display() {
        cout << "Value of b in ClassB: " << b << endl;
    }
    void accessClassA(ClassA objA) {
        cout << "Value of a accessed from ClassB: " << objA.a << endl;
    }
};
int main() {
    ClassA objA(5);
    ClassB objB(10);
    objA.display();
    objB.display();
    objB.accessClassA(objA);
    return 0;
}
