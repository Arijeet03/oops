/*5.	Overload ‘()’ to input arbitrary number of input arguments for an object*/

#include <iostream>

using namespace std;

class ArbitraryInput {
public:
    void operator()(int arg1, int arg2, int arg3) {
        cout << "Input received: " << arg1 << ", " << arg2 << ", " << arg3 << endl;
    }

    void operator()(double arg1, double arg2, double arg3, double arg4) {
        cout << "Input received: " << arg1 << ", " << arg2 << ", " << arg3 << ", " << arg4 << endl;
    }
};

int main() {
    ArbitraryInput obj;

    // Using () operator with three arguments
    obj(1, 2, 3);

    // Using () operator with four arguments
    obj(1.5, 2.5, 3.5, 4.5);

    return 0;
}
