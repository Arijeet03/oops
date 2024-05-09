/*Class polygon contains data member width and height and public method set_value() to assign values to width and height.
 Class Rectangle and Triangle are inherited from polygon class. Both the classes contain public method calculate_area() to calculate the area 
 of Rectangle and Triangle. Use base class pointer to access the derived class object and show the area calculated. */

#include <iostream>

using namespace std;

class Polygon {
protected:
    int width;
    int height;

public:
    void set_values(int w, int h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Polygon {
public:
    int calculate_area() {
        return width * height;
    }
};

class Triangle : public Polygon {
public:
    int calculate_area() {
        return (width * height) / 2;
    }
};

int main() {
    Rectangle rect;
    Triangle tri;

    rect.set_values(5, 6);
    tri.set_values(4, 3);

    Polygon *ptrRect = &rect;
    cout << "Area of Rectangle: " << ((Rectangle*)ptrRect)->calculate_area() << endl;

    Polygon *ptrTri = &tri;
    cout << "Area of Triangle: " << ((Triangle*)ptrTri)->calculate_area() << endl;

    return 0;
}

