#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    if (cin >> t) {
        for (int case_num = 1; case_num <= t; case_num++) {
            char dummy_n, dummy_equal;
            int n;
            
            // 讀取題目中 "N = n" 的格式
            cin >> dummy_n >> dummy_equal >> n;
            
            // 使用 long long 型態儲存，防止 2^32 溢位
            vector<vector<long long>> matrix(n, vector<long long>(n));
            bool is_symmetric = true;
            
            // 1. 讀取矩陣，並在讀取時直接檢查是否有負數
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cin >> matrix[i][j];
                    if (matrix[i][j] < 0) {
                        is_symmetric = false; // 出現負數，直接判斷為不對稱
                    }
                }
            }
            
            // 2. 如果沒有負數，接著進行中心點對稱檢查
            if (is_symmetric) {
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        // 檢查座標 (i, j) 與對稱點 (n - 1 - i, n - 1 - j) 是否相等
                        if (matrix[i][j] != matrix[n - 1 - i][n - 1 - j]) {
                            is_symmetric = false;
                            break;
                        }
                    }
                    if (!is_symmetric) break;
                }
            }

            if (is_symmetric) {
                cout << "Test #" << case_num << ": Symmetric.\n";
            } else {
                cout << "Test #" << case_num << ": Non-symmetric.\n";
            }
        }
    }
}