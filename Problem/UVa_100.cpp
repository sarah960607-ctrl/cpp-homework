#include<iostream>
using namespace std;

int main() {
    int i, j, n;
    while (cin >> i >> j) {
       
        int max = 0;
        int I = i;
        int J = j;
        if (i > j) {
            swap(i, j);
        }
        for (int n = i; n < j + 1; n++) {
            int temp = n; 
            int length = 1;
            while (temp != 1) {
                if (temp % 2 == 0) {
                    temp = temp / 2;
                    length++;
                }
                else if (temp % 2 == 1) {
                    temp = 3 * temp + 1;
                    length++;
                }
                else 
                    break;
            }
            if (length >= max)
                max = length;
        }
        cout << I << " " << J << " " << max << endl;
    }
} //一開始沒也int temp=n，導致了for迴圈無法結束。以及int lengh應該要在for裡面才對，不然length會一直增加。最後要注意輸出i跟j的順序。
