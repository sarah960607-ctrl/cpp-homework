#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	long long n, m;
	while (cin >> n >> m) {
		long long a[100] = { 0 };
		bool ok = true;
		int cnt = 0;
		if (n <= 1 || m <= 1) {
			cout << "Boring!" << endl;
			continue;
		}
		a[cnt++] = n;
		while (n > 1) {
			if (n % m != 0) {
				ok = false;
				break;
			}
				n /= m;
				a[cnt++] = n;
		}
		if (ok && a[cnt-1] == 1) {
			cout << a[0];
			for (int i = 1; i < cnt; i++) {
				cout << " " << a[i];
			}
		}
		else
			cout << "Boring!";
		cout << endl;
	}
}