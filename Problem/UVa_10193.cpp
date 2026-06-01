#include<iostream>
using namespace std;
//找s1,s2的公因數
int main() {
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        string s1, s2;
        cin >> s1 >> s2;

        // binary -> decimal
        long long a = 0, b = 0;

        for (char c : s1) {
            a = a * 2 + (c - '0');//'0'=48;'1'=49
        }
        for (char c : s2) {
            b = b * 2 + (c - '0');
        }
        long long x = a, y = b;
        while (y) {
            long long t = x % y;
            x = y;
            y = t;
        }
        cout << "Pair #" << tc << ": ";
        if (x > 1)
            cout << "All you need is love!";
        else
            cout << "Love is not all you need!";
        cout << endl;
    }
}