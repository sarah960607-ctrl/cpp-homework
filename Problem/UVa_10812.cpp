#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if (b > a) {
			cout << "impossible" << endl;
			continue;
		}
		int sum, dif;
		if ((a + b) % 2 == 1) {
			cout << "impossible" << endl;
			continue;
		}
		if ((a - b) % 2 == 1) {
			cout << "impossible" << endl;
			continue;
		}
		sum = (a + b) / 2;
		dif = (a - b) / 2;
		cout << sum << " " << dif << endl;
	}
}