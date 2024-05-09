/*8.	Write a program to convert UDT to basic data type (float)
class Test{
 public: 
operator data_type() { //Conversion code } 
};
*/
#include <iostream>

using namespace std;

class Test {
private:
    float value;

public:
    // Constructor to initialize the value
    Test(float val) : value(val) {}

    // Conversion operator to convert Test object to float
    operator float() {
        return value;
    }
};

int main() {
    Test testObject(3.14); // Create a Test object with value 3.14

    float floatValue = testObject; // Conversion from Test object to float

    cout << "Value in float: " << floatValue << endl;

    return 0;
}
