#include<iostream>
#include<string>
#include<iomanip>
#include<map>
using namespace std;

int main() {
	int T;
	cin >> T;
	string line;
	getline(cin, line);		//吃換行
	getline(cin, line);		//吃空白行
	
	while (T--) {
		map < string, int> cnt;
		int total = 0;;
		while (getline(cin, line)) {
			if (line.empty())
				break;
			cnt[line]++;
			total++;
		}
		for (auto const& p : cnt){
			cout << p.first << " " << fixed << setprecision(4)
				<< p.second * 100.0 / total << endl;
		}
		if(T)
			cout << endl;
	}
}