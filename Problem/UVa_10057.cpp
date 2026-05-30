#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main() {
	long long int n;
	while (cin >> n) {
		int num[1000000];
		for (int i = 0; i < n; i++) {
			cin >> num[i];
		}
		sort(num, num + n);
		long long int A;			//最小中位數
		long long int M = 0;			//A的數量
		long long int c = 0;			//**只有一個中位數=1;有兩個中位數 =right=left+1

		if (n % 2 == 1) {		//奇數個數字
			A = num[n / 2];
			for (int i = 0; i < n; i++) {
				if (num[i] == A) {
					M++;
				}
			}
			c = 1;
		}
		else {
			long long int left = num[n / 2 - 1];
			long long int right = num[n / 2];
			A = left;
			for (int i = 0; i < n; i++) {
				if ((num[i] >= left) && (num[i] <= right)) {
					M++;
				}
			}
			c = right - left + 1;
		}
		cout << A << " " << M << " " << c << endl;
	}
}