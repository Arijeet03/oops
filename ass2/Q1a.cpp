/*1.	Write a program to pass an object as an argument and return the object from a function.
a.	Use pass-by-value
b.	Use pass-by-address
*/

//a

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

// Function to modify and return an object using pass-by-value
MyClass modifyObjectByValue(MyClass obj) {
    obj.setValue(obj.getValue() * 2);
    return obj;
}

int main() {
    MyClass obj(5);

    cout << "Original value: " << obj.getValue() << endl;

    MyClass modifiedObj = modifyObjectByValue(obj);

    cout << "Value after modification using pass-by-value: " << modifiedObj.getValue() << endl;

    return 0;
}
