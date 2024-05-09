/* Write a user-defined function in C++ to read the content from a text file 
NOTES.TXT, count and display the number of alphabets present in it. */

#include <iostream>
#include <fstream>
using namespace std;
bool isAlphabet(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
int countAlphabets(const string& filename) {
    ifstream infile(filename);
    if (!infile.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return -1;
    }
    char ch;
    int alphabetCount = 0;
    while (infile.get(ch)) {
        if (isAlphabet(ch)) { 
            alphabetCount++;
        }
    }
    infile.close();
    return alphabetCount;
}
int main() {
    string filename = "NOTES.TXT";
    int count = countAlphabets(filename);
    if (count != -1) {
        cout << "Number of alphabets in " << filename << ": " << count << endl;
    }
    return 0;
}
