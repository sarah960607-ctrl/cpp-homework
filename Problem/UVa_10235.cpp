#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		bool prime = true;
		if (n == 1)
			prime = false;
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				prime = false;
				break;
			}
		}
		if (prime == 0) {
			cout << n << " is not prime." << endl;
			continue;
		}
		int rev = 0;
		int temp = n;
		while (temp) {
			rev = rev * 10 + temp % 10;
			temp /= 10;
		}
		bool rev_prime = true;
		if (rev == 1)
			rev_prime = false;
		for (int i = 2; i < rev; i++) {
			if (rev % i == 0) {
				rev_prime = false;
				break;
			}
		}
		if ((rev_prime && prime)&&(rev!=n))
			cout << n << " is emirp." << endl;
		else
			cout << n << " is prime." << endl;
	}
}