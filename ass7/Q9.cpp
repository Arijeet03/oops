/*9.	How will you convert one UDT to another UDT. For example conversion of polar to cartesian system. 
Polar p(10,5); 
Cartesian c = p;
c.show();
*/

#include <iostream>
#include <cmath>

using namespace std;

class Polar {
private:
    double radius;
    double angle; // Angle in radians

public:
    Polar(double r, double a) : radius(r), angle(a) {}

    double getRadius() const {
        return radius;
    }

    double getAngle() const {
        return angle;
    }
};

class Cartesian {
private:
    double x;
    double y;

public:
    // Conversion constructor from Polar to Cartesian
    Cartesian(const Polar& p) {
        x = p.getRadius() * cos(p.getAngle());
        y = p.getRadius() * sin(p.getAngle());
    }

    void show() const {
        cout << "Cartesian Coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Polar p(10, 5); // Polar coordinates (radius=10, angle=5 radians)

    // Conversion from Polar to Cartesian
    Cartesian c = p;

    // Display Cartesian coordinates
    c.show();

    return 0;
}
