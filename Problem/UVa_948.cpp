#include<iostream>
#include<string>

using namespace std;

int main() {
	long long fib[51];
	fib[0] = 1;
	fib[1] = 2;
	for (int i = 2; i <= 50; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		long long tempt = n;
		cout << n << " = ";
		bool started = false;//看有沒有第一位1
		for (int i = 50; i >= 0; i--) {
			if (n >= fib[i]) {
				cout << "1";
				n = n - fib[i];
				started = true;
			}
			else if (started) {
				cout << "0";
			}
		}
		cout << " (fib)" << endl;
	}
}