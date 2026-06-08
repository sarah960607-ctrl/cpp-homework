#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    vector<string> lines;
    string s;

    while (getline(cin, s)) {
        lines.push_back(s);
    }

    int mx = 0;

    for (string str : lines) {
        mx = max(mx, (int)str.size());
    }

    for (int col = 0; col < mx; col++) {

        for (int row = lines.size() - 1; row >= 0; row--) {

            if (col < lines[row].size())
                cout << lines[row][col];
            else
                cout << ' ';
        }
#include<iostream>
#include<string>

using namespace std;

int main() {
	string s[105];
	int n = 0;
	int mx = 0;
	while (getline(cin, s[n])) {
		if (s[n].size() > mx)
			mx = s[n].size();
		n++;
	}
	for (int x = 0; x < mx; x++) {		//有幾行
		for (int y = n-1; y >=0 ; y--) {		//印每一行的字
			if (s[y].size() > x)		//那行字串還有東西
				cout << s[y][x];
			else
				cout << ' ';
		}
		cout << endl;
	}
}