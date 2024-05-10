/* Write a C++ program creating an abstract class Student. Create three derived classes Science, Art and Commerce from the base class.
Create the objects of the derived classes and process them and access them using array of pointer of type Student.*/

#include <iostream>
#include <string>
using namespace std;
class Student {
protected:
    string name;
    int rollNumber;
public:
    virtual void displayDetails() = 0;
};
class Science : public Student {
private:
    string subject;
public:
    Science(string n, int r, string s) {
        name = n;
        rollNumber = r;
        subject = s;
    }

    void displayDetails() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << ", Subject: " << subject << endl;
    }
};
class Art : public Student {
private:
    string hobby;
public:
    Art(string n, int r, string h) {
        name = n;
        rollNumber = r;
        hobby = h;
    }
    void displayDetails() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << ", Hobby: " << hobby << endl;
    }
};
class Commerce : public Student {
private:
    string specialization;
public:
    Commerce(string n, int r, string s) {
        name = n;
        rollNumber = r;
        specialization = s;
    }
    void displayDetails() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << ", Specialization: " << specialization << endl;
    }
};
int main() {
    Science scienceStudent("John", 101, "Physics");
    Art artStudent("Alice", 102, "Painting");
    Commerce commerceStudent("Bob", 103, "Accounting");
    Student *students[3];
    students[0] = &scienceStudent;
    students[1] = &artStudent;
    students[2] = &commerceStudent;
    for (int i = 0; i < 3; ++i) {
        students[i]->displayDetails();
    }
    return 0;
}
