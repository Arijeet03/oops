/*Write a program to perform read/write binary I/O operation on a file 
(i.e. write the object of the class to a file)*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string generateLoremIpsum() {
    return "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque quis eros nec sapien gravida ultricies nec vel leo."
    "Nulla facilisi. Sed id erat ac lorem dictum bibendum.Quisque consequat nisl in massa sollicitudin, in eleifend lorem fermentum." 
    "Proin in quam vel urna dapibus dignissim.Nunc sit amet justo ac leo suscipit feugiat.";
}
void writeTextToBinaryFile(const string& text, const string& filename) {
    ofstream outFile(filename, ios::binary);
    if (!outFile.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }
    outFile.write(text.c_str(), text.size());
    outFile.close();
}
string readTextFromBinaryFile(const string& filename) {
    ifstream inFile(filename, ios::binary);
    if (!inFile.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return "";
    }
    inFile.seekg(0, ios::end);
    size_t size = inFile.tellg();
    inFile.seekg(0, ios::beg);
    string text(size, ' ');
    inFile.read(&text[0], size);
    inFile.close();
    return text;
}
int main() {
    string loremIpsum = generateLoremIpsum();
    writeTextToBinaryFile(loremIpsum, "NOTES.TXT");
    cout << "done" << endl;
    string readText = readTextFromBinaryFile("notes.txt");
    cout << "Text read from file:" << endl;
    cout << readText << endl;
    return 0;
}
