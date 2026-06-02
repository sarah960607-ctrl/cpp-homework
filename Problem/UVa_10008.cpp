#include<iostream>
#include<map>
#include<string>
#include<cctype>
using namespace std;

int main() {
	int T;
	cin >> T;
	getchar();
	string line;
	char a;
	int s[26] = { 0 };
	while (T--) {
		getline(cin, line);
		for (char c : line) {
			if (isalpha(c)) {
				c = toupper(c);
				s[c - 'A']++;
			}
		}
	}
	int mx = 0;
	for (int i = 0; i < 26; i++) {
		if (s[i] > mx)
			mx = s[i];
	}
	for (int i = mx; i > 0; i--) {
		for (int j = 0; j < 26;j++) {
			if (s[j] == i) {
				a = j + 'A';
				cout << a << " " << i << endl;
			}
		}
	}
return 0;
}