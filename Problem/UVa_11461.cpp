#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a, b;

    while (cin >> a >> b) {

        if (a == 0 && b == 0)
            break;

        int left = ceil(sqrt(a));
        int right = floor(sqrt(b));

        if (left > right)
            cout << 0 << endl;
        else
            cout << right - left + 1 << endl;
    }

    return 0;
}