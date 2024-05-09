#include <iostream>
using namespace std;

class Number {
protected:
    int num;

public:
    void setNumber(int n) {
        num = n;
    }
    int getNumber() const {
        return num;
    }
};

class Square : public Number {
public:
    int calculateSquare() {
        return num * num;
    }
};

class Cube : public Number {
public:
    int calculateCube() {
        return num * num * num;
    }
};

int main() {
    Square squareObj;
    Cube cubeObj;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    squareObj.setNumber(number);
    cubeObj.setNumber(number);
    cout << "Square of " << squareObj.getNumber() << " is: " << squareObj.calculateSquare() << endl;
    cout << "Cube of " << cubeObj.getNumber() << " is: " << cubeObj.calculateCube() << endl;
    return 0;
}
