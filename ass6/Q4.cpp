/* 4.	Write a program with Student as abstract class and create derive classes Engineering, Medicine and Science from base class Student.
 Create the objects of the derived classes and process them and access them using array of pointer of type base class Student.*/

#include <iostream>
using namespace std;

class Student {
public:
    virtual void getInfo() = 0; // pure virtual function
};

class Engineering : public Student {
public:
    void getInfo() {
        cout << "This is Engineering student." << endl;
    }
};

class Medicine : public Student {
public:
    void getInfo() {
        cout << "This is Medicine student." << endl;
    }
};

class Science : public Student {
public:
    void getInfo() {
        cout << "This is Science student." << endl;
    }
};

int main() {
    Student* students[3]; // array of pointers of type Student

    students[0] = new Engineering();
    students[1] = new Medicine();
    students[2] = new Science();

    for (int i = 0; i < 3; i++) {
        students[i]->getInfo();
    }

    return 0;
}