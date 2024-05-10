/*7.	Define a class named Complex with properties (real and imaginary) and methods as per following details.
	void set () to initialize object values.
	void display () to display complex number.
Complex sum (Complex) or void sum (Complex) to add two complex numbers (objects of Complex class) and return complex_number (object of Complex class) as result.

Properties (real and imaginary) of the code should have private access modifier and member functions should have public access modifier in C++ class.
*/

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    void set(float r, float i) {
        real = r;
        imaginary = i;
    }

    void display() {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }

    Complex sum(Complex other) {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }
};

int main() {
    Complex c1, c2, result;

    c1.set(3.5, 2.5);
    c2.set(2.5, 1.5);

    cout << "First Complex Number:" << endl;
    c1.display();
    cout << "Second Complex Number:" << endl;
    c2.display();

    result = c1.sum(c2);

    cout << "Sum of Complex Numbers:" << endl;
    result.display();

    return 0;
}
