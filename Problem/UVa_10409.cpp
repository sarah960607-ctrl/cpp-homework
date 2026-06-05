#include<iostream>
#include<string>
using namespace std;

int main() {

	int t;
	while (cin >> t && t != 0) {
		getchar();//**************** */
		int top = 1;
		int buttom = 6;
		int north = 2;
		int south = 5;
		int west = 3;
		int east = 4;
		string cmd;
		while (t--) {
			getline(cin, cmd);
			
			if (cmd == "north") {
				int temp;
				temp = north;
				north = top;
				top = south;
				south = buttom;
				buttom = temp;
			}
			else if (cmd == "south") {
				int temp = top;
				top = north;
				north = buttom;
				buttom = south;
				south = temp;
			}
			else if (cmd == "west") {
				int temp = west;
				west = top;
				top = east;
				east = buttom;
				buttom = temp;
			}
			else {
				int temp = east;
				east = top;
				top = west;
				west = buttom;
				buttom = temp;
			}
		}
		cout << top << endl;
	}
}