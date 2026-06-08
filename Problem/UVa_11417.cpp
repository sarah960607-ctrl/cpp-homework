#include <iostream>
using namespace std;
//GCD
int main() {
    int N;
    while (cin >> N && N) {
        long long ans = 0;
        for (int i = 1; i < N; i++) {
            for (int j = i + 1; j <= N; j++) {
                int a = i;
                int b = j;
                while (b != 0) {
                    int temp = a % b;          // 6=24%18     ->0=18%6
                    a = b;                      //a=18        ->a=6
                    b = temp;                   //b=6
                }
                ans += a;                       //ans=a;
            }
        }
        cout << ans << endl;
    }
}