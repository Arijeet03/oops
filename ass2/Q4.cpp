// 4.	Write a program to define function cube() as inline for calculating cube of a number.

#include <iostream>
using namespace std;
inline double cube(double num) {
    return num * num * num;
}
int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;
    double result = cube(number);
    cout << "Cube of " << number << " is: " << result << endl;
    return 0;
}
