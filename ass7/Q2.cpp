/* 2.	Define a class STRING and overload = = to compare two strings and + operator for concatenation of two strings.*/

#include <iostream>
#include <cstring>
using namespace std;
class STRING {
private:
    char* str;
public:
    STRING(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    STRING(const STRING& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }
    ~STRING() {
        delete[] str;
    }
    bool operator==(const STRING& other) const {
        return strcmp(str, other.str) == 0;
    }
    STRING operator+(const STRING& other) const {
        char* temp = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(temp, str);
        strcat(temp, other.str);
        STRING result(temp);
        delete[] temp;
        return result;
    }
    void display() const {
        cout << str;
    }
};
int main() {
    STRING s1("Hello"), s2("Hello"), s3(" World");
    if (s1 == s2)
        cout << "Strings s1 and s2 are equal." << endl;
    else
        cout << "Strings s1 and s2 are not equal." << endl;
    STRING s4 = s1 + s3;
    cout << "Concatenated string: ";
    s4.display();
    cout << endl;

    return 0;
}
