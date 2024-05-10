/*2.	Redefine the above program by creating an array of objects of the class Rectangle and calculate area for each object 
calling different constructors. Also implement constructors with default arguments and destructor in this program.*/

#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double breadth;
public:
    Rectangle(double len = 0, double brd = 0) : length(len), breadth(brd) {} 
    double calculateArea() { 
        return length * breadth;
    }
    void display() { 
        cout << "Length: " << length << ", Breadth: " << breadth << ", Area: " << calculateArea() << endl;
    }
    ~Rectangle() { 
        cout << "Destructor called for rectangle with dimensions: " << length << " x " << breadth << endl;
    }
};
int main() {
    Rectangle rectangles[3] = {
        Rectangle(),              
        Rectangle(5.0),           
        Rectangle(3.0, 4.0)      
    };
    cout << "Area for each rectangle:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Rectangle " << i+1 << ": ";
        rectangles[i].display();
    }
    return 0;
}
