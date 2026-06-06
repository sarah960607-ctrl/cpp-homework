#include<iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		long long x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		long long n1 = x1 + y1;
		long long n2 = x2 + y2;
		long long pos1 = n1 * (n1 + 1) / 2 + x1;
		long long pos2 = n2 * (n2 + 1) / 2 + x2;
		long long ans = pos2 - pos1;
		cout << "Case " << t << ": " << ans << endl;
	}
}