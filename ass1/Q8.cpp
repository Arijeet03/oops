/*8.	Implement namespace in a program to illustrate 
the use of same name variables and functions in different sections/libraries of the code.*/

#include <iostream>
using namespace std;

namespace Library1 {
    int number = 10;

    void display() {
        cout << "This is from Library1" << endl;
    }
}

namespace Library2 {
    int number = 20;

    void display() {
        cout << "This is from Library2" << endl;
    }
}

int main() {
    cout << "Number from Library1: " << Library1::number << endl;
    Library1::display();

    cout << "Number from Library2: " << Library2::number << endl;
    Library2::display();

    return 0;
}
