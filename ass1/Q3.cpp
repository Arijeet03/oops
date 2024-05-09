/*3.	WAP to demonstrate for, while, do-while (with all possible variations), like for loop can be demonstrated without giving initialization in for construct or without giving increment in for construct. 

Sample:
for (int i=0; i<10; i++)

i=0
for (; i<10; i++)

i=0
for (; i<10;)
i++
*/
#include <iostream>
using namespace std;
int main() {
    int i = 0;

    // for loop with initialization, condition, and increment
    cout << "For loop with initialization, condition, and increment:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    i = 0;

    // for loop without initialization
    cout << "For loop without initialization:" << endl;
    for (; i < 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    i = 0;

    // for loop without increment
    cout << "For loop without increment:" << endl;
    for (; i < 10;) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    i = 0;

    // while loop
    cout << "While loop:" << endl;
    while (i < 10) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    i = 0;

    // do-while loop
    cout << "Do-While loop:" << endl;
    do {
        cout << i << " ";
        i++;
    } while (i < 10);
    cout << endl;

    return 0;
}
