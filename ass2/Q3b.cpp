// 3.	Create code snippets that illustrates the use of scope resolution operator (: :) for the following uses:
/*a.	Member functions defined outside class
b.	To access a global variable when there is a local variable with same name
c.	To access a class’s static variables
d.	Including in-built libraries
*/

//b
#include <iostream>
using namespace std;
int global = 10; 
int main() {
    int local = 20; 
    cout << global << endl;
    cout << local << endl;
    cout << ::global << endl;
    return 0;
}
