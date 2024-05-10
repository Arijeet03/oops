/*4.	Write a program to implement (a) pointer to an object (b) this pointer. 
Practice both ‘.’ (dot operator) and ‘->’ (arrow operator).*/

#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    void setValue(int val) {
        this->value = val; 
    }
    int getValue() const {
        return this->value; 
    }
};
int main() {
    MyClass obj1(5);
    MyClass *ptr = &obj1;
    cout << "Value of obj1 using dot operator: " << obj1.getValue() << endl;
    cout << "Value of obj1 using arrow operator: " << ptr->getValue() << endl;
    obj1.setValue(10);
    cout << "Updated value of obj1 using dot operator: " << obj1.getValue() << endl;
    ptr->setValue(15);
    cout << "Updated value of obj1 using arrow operator: " << ptr->getValue() << endl;
    return 0;
}

