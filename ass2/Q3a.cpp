// 3.	Create code snippets that illustrates the use of scope resolution operator (: :) for the following uses:
/*a.	Member functions defined outside class
b.	To access a global variable when there is a local variable with same name
c.	To access a class’s static variables
d.	Including in-built libraries
*/

//a

#include <iostream>
using namespace std;
class MyClass {
public:
    void myFunction();
};
void MyClass::myFunction() {
    cout << "Hi" << endl;
}
int main() {
    MyClass obj;
    obj.myFunction(); 
    return 0;
}
