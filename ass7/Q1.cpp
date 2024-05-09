/*Create a class Time with three private variables int h,m,s; Create a function to overload ‘+’ operator to add two time variables. 
int main(){
    Time t1(5,15,34),t2(9,53,58),t3;
    t3 = t1 + t2;  t3.show();  
}
*/
#include <iostream>
using namespace std;
class Time {
private:
    int h, m, s;
public:
    Time(int _h = 0, int _m = 0, int _s = 0) : h(_h), m(_m), s(_s) {}
    Time operator+(const Time& other) {
        Time temp;
        temp.s = s + other.s;
        temp.m = m + other.m + temp.s / 60;
        temp.s %= 60;
        temp.h = h + other.h + temp.m / 60;
        temp.m %= 60;
        return temp;
    }
    void show() {
        cout << "Time: " << h << ":" << m << ":" << s << endl;
    }
};
int main() {
    Time t1(5, 15, 34), t2(9, 53, 58), t3;
    t3 = t1 + t2;
    t3.show();
    return 0;
}
