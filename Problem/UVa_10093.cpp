#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	while (cin >> s) {
		int sum = 0;
		int mx = 0;
		for (int i = 0; i < s.size(); i++) {
			int v;			//v在題目中的數值
			if (s[i] == '+' || s[i] == '-')
				continue;

			if ('0' <= s[i] && s[i] <= '9')
				v = s[i] - '0';
			else if ('A' <= s[i] && s[i] <= 'Z')
				v = s[i] - 'A' + 10;
			else if ('a' <= s[i] && s[i] <= 'z')
				v = s[i] - 'a' + 36;

			sum = sum + v;//每一位加起來
			if (v > mx)
				mx = v;
		}
		int start = mx + 1;
		if (start < 2)
			start = 2;

		bool found = false;
		for (int base = start; base <= 62; base++) {
			if (sum % (base - 1) == 0) {
				cout << base << endl;
				found = true;
				break;
			}
		}
		if (found==0)
			cout << "such number is impossible!" << endl;
	}
}