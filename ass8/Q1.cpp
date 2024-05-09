#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream outfile("NUM.TXT");
    if (!outfile.is_open()) {
        cerr << "Error" << endl;
        return 1;
    }
    for (int i = 1; i <= 200; ++i) {
        outfile << i << endl;
    }
    outfile.close();
    cout << "Done." << endl;
    return 0;
}
