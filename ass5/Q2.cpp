/*Write a program to define class X, Y and Z. Each class contains one character array as a data member. 
Using multiple inheritance, concatenate strings of class X and Y and store it in class Z. 
Using constructor and destructors, show all the three strings. */

#include <iostream>
#include <cstring>
using namespace std;
class X {
protected:
    char* strX;
public:
    X(const char* s) {
        strX = new char[strlen(s) + 1];
        strcpy(strX, s);
    }
    ~X() {
        delete[] strX;
    }
    void display() {
        cout << "String from X: " << strX << endl;
    }
};
class Y {
protected:
    char* strY;
public:
    Y(const char* s) {
        strY = new char[strlen(s) + 1];
        strcpy(strY, s);
    }
    ~Y() {
        delete[] strY;
    }
    void display() {
        cout << "String from Y: " << strY << endl;
    }
};
class Z : public X, public Y {
public:
    Z(const char* s1, const char* s2) : X(s1), Y(s2) {
        int lenX = strlen(strX);
        int lenY = strlen(strY);
        char* combined = new char[lenX + lenY + 1];
        strcpy(combined, strX);
        strcat(combined, strY);
        delete[] strX;
        strX = combined;
    }
    ~Z() {
        cout<<"Z's destructor called"<<endl;
    }
    void display() {
        cout << "Concatenated String from Z: " << strX << endl;
    }
};
int main() {
    Z obj("Hello, ", "world!");
    obj.display();
    obj.X::display();
    obj.Y::display();
    return 0;
}




