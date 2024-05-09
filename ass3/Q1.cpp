/*1.	Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'. The class has three constructors which are :
(a) having no parameter - values of both length and breadth are assigned zero.
(b) having two numbers as parameters - the two numbers are assigned as length and  
     breadth respectively.
(c) having one number as parameter - both length and breadth are assigned that number.
Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.
*/

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double breadth;
public:
    Rectangle() : length(0), breadth(0) {} 
    Rectangle(double len, double brd) : length(len), breadth(brd) {}
    Rectangle(double len) : length(len), breadth(len) {} 
    double calculateArea() {
        return length * breadth;
    }
    void display() { 
        cout << "Length: " << length << ", Breadth: " << breadth << ", Area: " << calculateArea() << endl;
    }
};
int main() {
    Rectangle rectangle1; 
    Rectangle rectangle2(5.0); 
    Rectangle rectangle3(3.0, 4.0); 
    cout << "Rectangle 1: ";
    rectangle1.display();
    cout << "Rectangle 2: ";
    rectangle2.display();
    cout << "Rectangle 3: ";
    rectangle3.display();
    return 0;
}
