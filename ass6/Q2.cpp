/*Write a program to create a class shape with functions area and display to find area and display the name of the shape 
and other essential component of the class. Create derived classes circle, rectangle and triangle each having overridden 
functions area and display. Write a program to find and display the area of circle, rectangle and triangle. */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Shape {
protected:
    string name;

public:
    Shape(const string& _name) : name(_name) {}

    virtual double area() const = 0;

    virtual void display() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(const string& _name, double _radius) : Shape(_name), radius(_radius) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    void display() const override {
        cout << "Shape: " << name << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(const string& _name, double _length, double _width) : Shape(_name), length(_length), width(_width) {}

    double area() const override {
        return length * width;
    }

    void display() const override {
        cout << "Shape: " << name << endl;
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(const string& _name, double _base, double _height) : Shape(_name), base(_base), height(_height) {}

    double area() const override {
        return 0.5 * base * height;
    }

    void display() const override {
        cout << "Shape: " << name << endl;
        cout << "Base: " << base << ", Height: " << height << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    Circle circle("Circle", 5.0);
    Rectangle rectangle("Rectangle", 4.0, 6.0);
    Triangle triangle("Triangle", 3.0, 4.0);

    circle.display();
    cout << endl;
    rectangle.display();
    cout << endl;
    triangle.display();

    return 0;
}
