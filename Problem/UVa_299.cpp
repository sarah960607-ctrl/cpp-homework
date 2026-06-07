#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int L = 0;          //車廂長度
        int count = 0;
        cin >> L;
        int arr[60];
        for (int j = 0; j < L; j++) {
            cin >> arr[j];
        }
        for (int k = 0; k < L - 1; k++) {
            for (int m = 0; m < L - k - 1; m++) {
                if (arr[m] > arr[m + 1]) {  // 交換相鄰車廂
                    swap(arr[m], arr[m + 1]);
                    count++;
                }
            }
        }
        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }
}