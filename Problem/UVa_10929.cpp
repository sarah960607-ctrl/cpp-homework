#include<iostream>
#include<string>

using namespace std;

int main() {
	string n;
	while (cin >> n && n != "0") {
		int odd = 0;
		int even = 0;
		for (int i = 0; i < n.size(); i++) {
			int digit = n[i] - '0';
			if (i % 2 == 1)
				even = even + digit;
			else
				odd = odd + digit;
		}
		if ((odd - even) % 11 == 0)
			cout << n << " is a multiple of 11." << endl;
		else
			cout << n << " is not a multiple of 11." << endl;
	}
}