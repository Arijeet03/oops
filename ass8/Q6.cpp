/*Practice file pointers using functions seekp(), seekg(), tellp() and tellg().*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    int length = inputString.length();
    cout << "Length of the string: " << length << endl;
    ofstream outFile("NOTES.TXT");
    if (!outFile.is_open()) {
        cerr << "Error." << endl;
        return 1; 
    }
    outFile << inputString;
    outFile.close();
    cout << "String stored." << endl;
    ifstream inFile("NOTES.TXT");
    if (!inFile.is_open()) {
        cerr << "Error." << endl;
        return 1; 
    }
    string storedString;
    getline(inFile, storedString);
    inFile.close();
    cout << "String retrieved: " << storedString << endl;
    return 0; 
}
