/*Write a C++ program to implement the diamond problem (hybrid inheritance). 
State the necessary assumptions using comments.  – (HINT: use virtual base class)*/
#include<iostream>
using namespace std;
class A{
    public:
    void display() {
        cout << "A" << endl;
    }
};
class B: virtual public A{
    public:
    void display() {
        cout << "B" << endl;
    }
};
class C: virtual public A{
    public:
    void display() {
        cout << "c" << endl;
    }
};
class D : public B, public C {
public:
    void display() {
        // Using scope resolution operator
        A::display();
        cout << "D" << endl;
    }
};
int main() {
    D obj;
    obj.display();
    return 0;
}

