#include <iostream>
#include <string>

using namespace std;
class Student {
protected:
    int RollNo;
    string Name;
public:
    void GetDetails() {
        cout << "Enter student roll number: ";
        cin >> RollNo;
        cout << "Enter name of the student: ";
        cin.ignore();
        getline(cin, Name);
    }
    void DisplayDetails() const {
        cout << RollNo << "\t\t" << Name << "\t\t";
    }
};
class Marks : public Student {
protected:
    int Subject1;
    int Subject2;
public:
    void GetMarks() {
        cout << "Enter the marks of subject 1: ";
        cin >> Subject1;
        cout << "Enter the marks of subject 2: ";
        cin >> Subject2;
    }
    void DisplayMarks() const {
        cout << Subject1 << "\t\t" << Subject2 << "\t\t";
    }
};

class Result : public Marks {
private:
    int TotalMarks;

public:
    void CalculateResult() {
        TotalMarks = Subject1 + Subject2;
    }

    void DisplayResult() const {
        cout << TotalMarks << "\t\t";
        if (TotalMarks >= 50) {
            cout << "PASSED" << endl;
        } else {
            cout << "FAILED" << endl;
        }
    }
};

int main() {
    int numStudents;
    
    cout << "Enter the number of students: ";
    cin >> numStudents;
    Result students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        students[i].GetDetails();
        students[i].GetMarks();
        students[i].CalculateResult();
    }

    // Displaying the table header
    cout << "\nRoll No.\tName\t\tSubject1\tSubject2\tTotal Marks Obtained\tResult" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;

    // Displaying the student results
    for (int i = 0; i < numStudents; i++) {
        students[i].DisplayDetails();
        students[i].DisplayMarks();
        students[i].DisplayResult();
    }

    cout << "----------------------------------------------------------------------------------------------------------------------------------" << endl;

    return 0;
}
