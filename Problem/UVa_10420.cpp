#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	int t;
	while (cin >> t) {
		map<string, int> mp;
		while (t--) {
			string country;
			cin >> country;			//讀一個字
			mp[country]++;
			string name;
			getline(cin, name);		//讀剩下的名字直到換行
		}
		for (auto &p : mp) {
			cout << p.first << " " << p.second << endl;
		}
	}
}