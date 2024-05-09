/*3.	Write a C++ program to compute area of right angle triangle, equilateral triangle, isosceles triangle using function overloading concept.*/

#include <iostream>
#include <cmath>

using namespace std;

double area(double base, double height) {
    return 0.5 * base * height;
}

double area(double side) {
    return (sqrt(3) / 4) * side * side;
}

double area(double base, double height, char isosceles) {
    return 0.5 * base * height;
}

int main() {
    double base1 = 5.0;
    double height1 = 4.0;
    cout << "Area of right-angle triangle: " << area(base1, height1) << endl;

    double side2 = 5.0;
    cout << "Area of equilateral triangle: " << area(side2) << endl;

    double base3 = 6.0;
    double height3 = 4.0;
    cout << "Area of isosceles triangle: " << area(base3, height3, 'i') << endl;

    return 0;
}
