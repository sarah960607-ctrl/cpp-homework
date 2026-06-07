#include<iostream>
#include<string>
using namespace std;

int main() {
	string line;
	int count = 0;
	while (getline(cin, line)) {
		for (char c : line) {

			if (c == '"' && count % 2 == 0) {
				cout << "``";
				count++;
			}
			else if (c == '"' && count % 2 == 1) {
				cout << "''";
				count++;
			}
			else
				cout << c;
		}
		cout << endl;
	}
}