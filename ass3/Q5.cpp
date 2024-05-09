/*5.	Write a program to swap private values of two classes using a friend function.*/

#include <iostream>
using namespace std;
class MyClass {
private:
    int value;
public:
    MyClass(int v = 0) : value(v) {}
    friend void swap(MyClass&, MyClass&);
    void display() { cout << "Value: " << value << endl; }
};
void swap(MyClass& a, MyClass& b) {
    int temp = a.value;
    a.value = b.value;
    b.value = temp;
}
int main() {
    MyClass obj1(10);
    MyClass obj2(20);
    cout << "Before swapping:\n";
    obj1.display();
    obj2.display();
    swap(obj1, obj2);
    cout << "\nAfter swapping:\n";
    obj1.display();
    obj2.display();

    return 0;
}