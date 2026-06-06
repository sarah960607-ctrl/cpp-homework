#include <iostream>
using namespace std;

int main() {
    long long n;

    while (cin >> n && n != 0) {

        long long temp = n;
        string binary = "";
        int ones = 0;

        // 轉 binary + 計 1
        while (n > 0) {
            int bit = n % 2;

            ones += bit;
            binary = char(bit + '0') + binary;

            n /= 2;
        }

        cout << "The parity of " << binary
             << " is " << ones
             << " (mod 2)." << endl;
    }
}