/*Write a program to copy the contents of one file to another.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string sourceFileName = "NOTES.TXT";
    string destinationFileName = "COPY_NOTES.TXT";
    ifstream sourceFile(sourceFileName);
    if (!sourceFile.is_open()) {
        cerr << "Error opening " << sourceFileName << endl;
        return 1; 
    }
    ofstream destinationFile(destinationFileName);
    if (!destinationFile.is_open()) {
        cerr << "Error opening " << destinationFileName << endl;
        sourceFile.close(); 
        return 1; 
    }
    char ch;
    while (sourceFile.get(ch)) {
        destinationFile.put(ch);
    }
    sourceFile.close();
    destinationFile.close();
    cout << "Done "<<endl;
    return 0; 
}
