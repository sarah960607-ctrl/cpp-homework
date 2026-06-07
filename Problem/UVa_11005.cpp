#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {

        int cost[36];

        // 讀入 36 個字元的成本
        for (int i = 0; i < 36; i++) {
            cin >> cost[i];
        }

        int q;
        cin >> q;

        cout << "Case " << tc << ":\n";

        while (q--) {

            int n;
            cin >> n;

            int minCost = INT_MAX;
            vector<int> ans;

            // 枚舉 base 2 ~ 36
            for (int base = 2; base <= 36; base++) {

                int totalCost = 0;
                int temp = n;

                // 特判 n = 0
                if (temp == 0) {
                    totalCost = cost[0];
                }
                else {
                    // 將 temp 轉成 base 進位並計算成本
                    while (temp > 0) {
                        int digit = temp % base;
                        totalCost += cost[digit];
                        temp /= base;
                    }
                }

                // 更新最小成本
                if (totalCost < minCost) {
                    minCost = totalCost;
                    ans.clear();
                    ans.push_back(base);
                }
                else if (totalCost == minCost) {
                    ans.push_back(base);
                }
            }

            cout << "Cheapest base(s) for number "
                 << n << ":";

            for (int b : ans) {
                cout << " " << b;
            }

            cout << "\n";
        }

        if (tc != T) {
            cout << "\n";
        }
    }

    return 0;
}