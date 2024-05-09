#include<iostream>
using namespace std;

class Alpha {
private:
    int alphadata;

public:
    Alpha(int data) : alphadata(data) {
        cout << "Alpha constructor: " << alphadata << endl;
    }
    ~Alpha() {
        cout << "Alpha destructor" << endl;
    }
    void displayAlpha() {
        cout << "Alpha data: " << alphadata << endl;
    }
};

class Beta {
private:
    int betadata;
public:
    Beta(int data) : betadata(data) {
        cout << "Beta constructor: " << betadata << endl;
    }
    ~Beta() {
        cout << "Beta destructor" << endl;
    }
    void displayBeta() {
        cout << "Beta data: " << betadata << endl;
    }
};

class Gamma : public Alpha, public Beta {
private:
    int gammadata;
public:
    Gamma(int alphadata, int betadata, int data) : Alpha(alphadata), Beta(betadata), gammadata(data) {
        cout << "Gamma constructor: " << gammadata << endl;
    }
    ~Gamma() {
        cout << "Gamma destructor" << endl;
    }
    void displayGamma() {
        cout << "Gamma data: " << gammadata << endl;
    }
};
int main() {
    Gamma obj(10, 20, 30);
    obj.displayAlpha();
    obj.displayBeta();
    obj.displayGamma();
    return 0;
}
