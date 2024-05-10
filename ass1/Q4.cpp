/*4.	Create a structure in C++ containing the details of Students as details below and a main function to execute the structure. 
            Data Members(properties):
	 Name
Roll No
Degree
Hostel
CurrentCGPA

            Member Function(behavior):
addDetails();
updateDetails();
updateCGPA();
updateHostel();
displaydetails();
*/

#include <iostream>
#include <string>
using namespace std;
struct Student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;
    void addDetails() {
        cout << "Enter name: ";
        cin>>name;
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
        cin>>name;
        cout << "Enter updated Roll No: ";
        cin >> rollNo;
        cout << "Enter updated Degree: ";
        cin>> degree;
        cout << "Enter updated Hostel: ";
        cin >> degree;
    }
    void updateCGPA(float newCGPA) {
        currentCGPA = newCGPA;
    }
    void updateHostel(string newHostel) {
        hostel = newHostel;
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
    student.updateCGPA(3.8);
    cout << "\nUpdated CGPA:" << endl;
    student.displayDetails();
    student.updateHostel("New Hostel");
    cout << "\nUpdated Hostel:" << endl;
    student.displayDetails();
    cout << "\nUpdating details for student:" << endl;
    student.updateDetails();
    cout << "\nUpdated Details:" << endl;
    student.displayDetails();
    return 0;
}
