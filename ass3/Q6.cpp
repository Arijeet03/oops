/*6.	Write a program to add data objects of two different classes using friend functions.*/

#include <iostream>
using namespace std;

class ClassB; 
class ClassA {
private:
    int a;
public:
    ClassA(int val) : a(val) {}
    friend void addValues(ClassA objA, ClassB objB);
};
class ClassB {
private:
    int b;
public:
    ClassB(int val) : b(val) {}
    friend void addValues(ClassA objA, ClassB objB);
};
void addValues(ClassA objA, ClassB objB) {
    int sum = objA.a + objB.b;
    cout << "Sum of data objects from ClassA and ClassB: " << sum << endl;
}
int main() {
    ClassA objA(5);
    ClassB objB(10);
    addValues(objA, objB);
    return 0;
}
