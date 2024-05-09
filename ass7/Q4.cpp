/* 4.	Overload ‘[]’ to check array index out of bounds problem at run time.*/

#include <iostream>
using namespace std;

class Array {
private:
    int* arr;
    int size;

public:
    Array(int n) {
        size = n;
        arr = new int[size];
    }

    int& operator[](int index) {
        if (index < 0 || index >= size) {
            cout << "Array index out of bounds!" << endl;
        }
        return arr[index];
    }
};

int main() {
    Array myArray(5);
    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[-1] = 40; // This will trigger the out of bounds check
    myArray[5] = 50;  // This will trigger the out of bounds check

    return 0;
}