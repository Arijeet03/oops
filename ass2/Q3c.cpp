/*3.	Create code snippets that illustrates the use of scope resolution operator (: :) for the following uses:
a.	Member functions defined outside class
b.	To access a global variable when there is a local variable with same name
c.	To access a class’s static variables
d.	Including in-built libraries
*/

//c

#include <iostream>
using namespace std;
class MyClass {
public:
    static int hey;
};
int MyClass::hey = 5;

int main() {
    cout << MyClass::hey << endl;
    MyClass::hey = 10;
    cout << MyClass::hey << endl;
    return 0;
}
