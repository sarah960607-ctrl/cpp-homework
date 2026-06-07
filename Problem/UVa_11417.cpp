#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N && N) {
        long long ans = 0;
        for (int i = 1; i < N; i++) {
            for (int j = i + 1; j <= N; j++) {
                int a = i;
                int b = j;
                while (b != 0) {
                    int temp = a % b;
                    a = b;
                    b = temp;
                }
                ans += a;
            }
        }
        cout << ans << endl;
    }
}