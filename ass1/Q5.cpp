#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;
    void updateCGPA(float newCGPA) {
        currentCGPA = newCGPA;
    }
    void updateHostel(string newHostel) {
        hostel = newHostel;
    }
public:
    void addDetails() {
        cout << "Enter name: ";
        cin>> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Degree: ";
        cin>>degree;
        cout << "Enter Hostel: ";
        cin>>hostel;
        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
    }

    void updateDetails() {
        cout << "Enter updated name: ";
        cin>> name;
        cout << "Enter updated Roll No: ";
        cin >> rollNo;
        cout << "Enter updated Degree: ";
        cin>>degree;
        cout << "Enter updated Hostel: ";
        cin>> hostel;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

int main() {
    Student student;
    cout << "Adding details for student:" << endl;
    student.addDetails();
    cout << "\nStudent Details:" << endl;
    student.displayDetails();
    //student.updateCGPA(3.8); 
    //student.updateHostel("New Hostel"); 
    cout << "\nUpdating details for student:" << endl;
    student.updateDetails();
    cout << "\nUpdated Details:" << endl;
    student.displayDetails();
    return 0;
}
