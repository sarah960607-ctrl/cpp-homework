#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {
    double h, angle;
    string unit;

    const double PI = acos(-1.0);//cos(pi)=-1;

    while (cin >> h >> angle >> unit) {

        if (unit == "min")
            angle /= 60.0;

        if (angle > 180.0)
            angle = 360.0 - angle;

        double r = 6440.0 + h;
        double theta = angle * PI / 180.0;
        double arc = r * theta;
        double chord = 2.0 * r * sin(theta / 2.0);

        cout << fixed << setprecision(6)
            << arc << " " << chord << endl;
    }
}