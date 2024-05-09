#include <iostream>
using namespace std;

class Base {
public:
    void publicMethod() {
        cout << "Public method from Base class" << endl;
    }

protected:
    void protectedMethod() {
        cout << "Protected method from Base class" << endl;
    }

private:
    void privateMethod() {
        cout << "Private method from Base class" << endl;
    }
};

class DerivedPublic : public Base {
public:
    void accessBaseMembers() {
        publicMethod();      
        protectedMethod();  
        // privateMethod(); 
    }
};

// Derived class with protected inheritance
class DerivedProtected : protected Base {
public:
    void accessBaseMembers() {
        publicMethod();      
        protectedMethod();   
        // privateMethod();  
    }
};

// Derived class with private inheritance
class DerivedPrivate : private Base {
public:
    void accessBaseMembers() {
        publicMethod();      
        protectedMethod();   
        // privateMethod();  
    }
};

int main() {
    DerivedPublic d1;
    cout << "DerivedPublic:" << endl;
    d1.accessBaseMembers();  

    DerivedProtected d2;
    cout << "\nDerivedProtected:" << endl;
    d2.accessBaseMembers();  

    DerivedPrivate d3;
    cout << "\nDerivedPrivate:" << endl;
    d3.accessBaseMembers();  

    return 0;
}
