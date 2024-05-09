/*1.	Write a program to pass an object as an argument and return the object from a function.
a.	Use pass-by-value
b.	Use pass-by-address
*/

//b

#include <iostream>

using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    void setValue(int v) {
        value = v;
    }

    int getValue() const {
        return value;
    }
};

// Function to modify and return an object using pass-by-address
void modifyObjectByAddress(MyClass* obj) {
    obj->setValue(obj->getValue() * 2);
}

int main() {
    MyClass obj(5);

    cout << "Original value: " << obj.getValue() << endl;

    modifyObjectByAddress(&obj);

    cout << "Value after modification using pass-by-address: " << obj.getValue() << endl;

    return 0;
}
