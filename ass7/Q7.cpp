/*7.	Write a program to convert basic data type (float) to user defined data type (object).
class Test { 
private: //…. 
public: 
Test ( data_type) { // conversion code } 
};
*/

#include <iostream>

using namespace std;

class Test {
private:
    float value;

public:
    // Constructor for conversion from float
    Test(float val) : value(val) {}

    // Function to display the value
    void display() {
        cout << "Value in Test object: " << value << endl;
    }
};

int main() {
    float floatValue = 3.14;
    Test testObject = floatValue; // Conversion from float to Test object

    // Display the value stored in the Test object
    testObject.display();

    return 0;
}
