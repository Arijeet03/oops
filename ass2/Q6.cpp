// 6.	Implement static member function using a C++ program.

#include <iostream>
using namespace std;
class MyClass {
public:
    static void showMessage() {
        cout << "This is a static member function." << endl;
    }
};
int main() {
    MyClass::showMessage();
    return 0;
}
