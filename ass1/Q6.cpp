/*6.	Create a code snippet that illustrates the following:
a.	Calling of private member functions inside public member function
b.	Access private member functions inside public member function
*/
#include <iostream>
using namespace std;

class Example {
private:
    int privateValue;

    void privateFunction() {
        cout << "Inside privateFunction()" << endl;
        cout << "Private value: " << privateValue << endl;
    }

public:
    void publicFunction() {
        cout << "Inside publicFunction()" << endl;
        privateValue = 10; 
        privateFunction(); 
    }
};
int main() {
    Example ex;
    ex.publicFunction();
    return 0;
}
