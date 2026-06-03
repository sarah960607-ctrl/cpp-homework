#include<string>
#include<iostream>
#include<algorithm>
using namespace std;


int main() {
	string a;
	string b;

	while (getline(cin, a) && getline(cin, b)) {
		int cnta[26] = { 0 };
		int cntb[26] = { 0 };
		for(char c:a){
			cnta[c - 'a']++;
		}
		for (char c : b) {
			cntb[c - 'a']++;
		}
		for (int i = 0; i < 26; i++) {
			if (cnta[i] > 0 && cntb[i] > 0 && (cnta[i] >= cntb[i]||cnta[i]<=cntb[i])) {
				for (int j = 0; j < min(cnta[i],cntb[i]); j++) {
					char c = i + 'a';
					cout << c;
				}
			}
		}
		cout << endl;
	}
}