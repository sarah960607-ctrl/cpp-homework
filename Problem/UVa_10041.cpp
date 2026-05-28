#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main() {					//他家住中位數，只要找出他跟其他房子的距離再加起來
	int T;
	cin >> T;
	while (T--) {
		int r;
		cin >> r;
		int a[505];
		for (int i = 0; i < r; i++) {
			cin >> a[i];
		}
		sort(a, a + r);
		int mid = a[r / 2];	//中位數
		int sum = 0;
		for (int i = 0; i < r; i++) {
			sum = sum + abs(a[i] - mid);
		}
		cout << sum << endl;
	}
}