#include<string>
#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	string song;
	string finger[1000];
	finger['c'] = "0111001111";
	finger['d'] = "0111001110";
	finger['e'] = "0111001100";
	finger['f'] = "0111001000";
	finger['g'] = "0111000000";
	finger['a'] = "0110000000";
	finger['b'] = "0100000000";
	finger['C'] = "0010000000";
	finger['D'] = "1111001110";
	finger['E'] = "1111001100";
	finger['F'] = "1111001000";
	finger['G'] = "1111000000";
	finger['A'] = "1110000000";
	finger['B'] = "1100000000";
	while (t--) {
		string song;
		getline(cin, song);
		int cnt[10] = { 0 };
		string last = "0000000000";
		for (char c : song) {
			string now = finger[c];					
			for (int i = 0; i < 10; i++) {
				if (now[i] == '1' && last[i] == '0')		//如果現在要按但剛剛沒按
					cnt[i]++;
			}
			last = now;			//把現在的變成剛剛
		}
		for (int i = 0; i < 10; i++) {
			if (i == 0)
				cout <<cnt[i];
			else
				cout << " " << cnt[i];
		}
		cout << endl;
	}
}