#include <iostream>
#include <cmath>   // sqrt
using namespace std;

int main() {
    int a, b;

    // 一直讀到 0 0 結束
    while (cin >> a >> b) {

        if (a == 0 && b == 0)
            break;

        // 1~b 的平方數個數
        int right = sqrt(b);

        // 1~(a-1) 的平方數個數
        int left = sqrt(a - 1);

        // 區間答案
        cout << right - left << "\n";
    }

    return 0;
}