#include<iostream>
#include<vector>
#include<stdlib.h>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main() {
	int n;
	cin >> n;
	getchar();

	vector<int> cnt(26, 0);

	for (int i = 0; i < n; i++) {
		string line;
		getline(cin, line);

		for (char c : line) {
			if (isalpha(c)) {
				c = toupper(c);//變大寫
				cnt[c - 'A']++;
			}
		}
	}
	vector<pair<char, int>> v;
	for (int i = 0; i < 26; i++) {
		if (cnt[i] > 0) {
			v.push_back({ char('A' + i),cnt[i] });
		}
	}
	int max=0;
	for (int i = 0; i < 26; i++) {
		if (cnt[i] > max)
			max = cnt[i];
	}
	for (int i = max; i > 0; i--) {//先比較次數，在比較字母順序
		for (int j = 0; j < 26; j++) {
			if (cnt[j] == i) {
				char a = j + 'A';
				cout << a << " " << i << endl;
			}
		}
	}
}
