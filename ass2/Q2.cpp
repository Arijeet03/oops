/*2.	Write a program using Array of Objects to display area of multiple rectangles.*/

#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Function to calculate area
    double calculateArea() {
        return length * width;
    }
};

int main() {
    const int numRectangles = 3; // Number of rectangles

    // Array of Rectangle objects
    Rectangle rectangles[numRectangles] = {
        Rectangle(4, 5),  // Rectangle 1
        Rectangle(3, 6),  // Rectangle 2
        Rectangle(7, 2)   // Rectangle 3
    };

    // Display the area of each rectangle
    for (int i = 0; i < numRectangles; ++i) {
        cout << "Area of Rectangle " << i + 1 << ": " << rectangles[i].calculateArea() << endl;
    }

    return 0;
}
