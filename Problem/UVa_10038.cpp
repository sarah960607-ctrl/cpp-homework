#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int a[3005];
		int check[3005] = { 0 };
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++) {
			int dif = abs(a[i] - a[i + 1]);
			if (dif >= 1 && dif <= n - 1)
				check[dif] = 1;
		}
		int sure = 1;			//檢查1~n個差是否都有
		for (int i = 1; i < n; i++) {
			if (check[i] == 0)
				sure = 0;
		}
		if (sure)
			cout << "Jolly\n";
		else
			cout << "Not jolly\n";
	}

}