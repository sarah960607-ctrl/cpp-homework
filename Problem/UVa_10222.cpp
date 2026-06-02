#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
	string s;
	string key = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	while (getline(cin, s)) {
		for (char c:s) {
			if (c == ' ') {
				cout << ' ';
				continue;
			}
			else {
				for (int j = 0; j < key.size(); j++) {
					c = tolower(c);
					if (c == key[j]) {
						cout << key[j - 2];
						break;
					}
				}
			}
		}
		cout << endl;
	}
}