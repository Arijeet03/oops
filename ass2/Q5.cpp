/*5.	Write a program to declare static public member variable, global and local variable with the same name. 
Initialize and display their contents.*/

#include <iostream>
using namespace std;
class MyClass {
public:
    static int hey; 
};
int MyClass::hey = 20;
int globalVar = 30;
int main() {
    int localVar = 40;
    cout << "Contents of static: " << MyClass::hey<< endl; 
    cout << "Contents of global: " << globalVar << endl;
    cout << "Contents of local: " << localVar << endl;

    return 0;
}
