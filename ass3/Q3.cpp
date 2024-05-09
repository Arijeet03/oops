/*3.	Verify the following about destructor by writing the program:
(i)	Name should begin with tilde sign(~) and must match class name.
(ii)	There cannot be more than one destructor in a class.
(iii)	Destructors do not allow any parameter.
(iv)	They do not have any return type, just like constructors.
When you do not specify any destructor in a class, compiler generates a default destructor and inserts it into your code.
*/

#include <iostream>
using namespace std;
class MyClass {
public:
    MyClass() {
        cout << "Constructor called" << endl;
    }
    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};
int main() {
    MyClass obj; // Creating an object of MyClass
    return 0;
}
