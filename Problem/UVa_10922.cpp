#include<iostream>
#include<string>
using namespace std;

int main() {
	string n;
	while (cin >> n&&n!="0") {
		long long s = 0;
		long degree = 1;
		string temp = n;
		bool yes = true;		//s是不是九
		while (1) {
			for (char c : n) {
				s = s + (c - '0');
			}

			if (s == 9) {
				yes = true;
				break;
			}
			if (s < 10)
				break;
			degree++;
			n = to_string(s);
			s = 0;
		}
		if (s != 9)
			cout << temp << " is not a multiple of 9." << endl;
		else
			cout << temp << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
	}
}