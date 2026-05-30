#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

int main() {
	string line;
	bool first = true;
	while (getline(cin, line)) {
		if (first != 1)
			cout << endl;
		first = false;
		int cnt[300] = { 0 };
		for (int i = 0; i < line.size(); i++) {
			cnt[line[i]]++;
		}
		for (int freq = 1; freq <= 1000; freq++) {
			for (int ascii = 127; ascii >= 0; ascii--) {
				if (cnt[ascii] == freq) {
					cout << ascii << " " << freq << endl;
				}
			}
		}
	}
}