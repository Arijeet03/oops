/*8.	Implement dynamic memory allocation. Use new and delete keywords.*/

#include <iostream>
using namespace std;
int main() {
    int *ptr = new int;
    if (ptr == nullptr) {
        cout << "Failed to allocate memory." << endl;
        return 1;
    }
    *ptr = 10;
    cout << "Value stored in dynamically allocated memory: " << *ptr << endl;
    delete ptr;
    return 0;
}
