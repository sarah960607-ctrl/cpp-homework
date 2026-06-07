#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    int month[13] = {
        0,
        31,28,31,30,31,30,
        31,31,30,31,30,31
    };

    string week[7] = {
        "Saturday",
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday"
    };

    while (T--) {
        int M, D;
        cin >> M >> D;

        int days = D;

        for (int i = 1; i < M; i++) {
            days += month[i];
        }

        cout << week[(days - 1) % 7] << '\n';
    }

    return 0;
}