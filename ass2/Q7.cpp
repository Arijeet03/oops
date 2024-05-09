/*7.	Write a C++ program to declare const member function and attempt any operation within it.*/

#include <iostream>
using namespace std;
class MyClass {
public:
    void display() const {
        // myVariable = 10;
        cout << "Inside const member function display()" << endl;
    }
private:
    int myVariable = 5;
};
int main() {
    MyClass obj;
    obj.display(); 
    return 0;
}
