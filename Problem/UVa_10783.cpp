#include<iostream>
using namespace std;

int main() {
	int odd[150] = { 0 };
	odd[0] = 1;
	for (int i = 0; i <= 100; i++) {
		odd[i + 1] = odd[i] + 2;
	}
	int t;
	cin >> t;
	for (int case_num = 1; case_num <=t ; case_num++) {
		int a, b;
		cin >> a >> b;
		if (a % 2 == 0)
			a = a + 1;
		if (b % 2 == 0)
			b = b - 1;
		int odd1 = (a - 1) / 2;
		int odd2 = (b - 1) / 2;
		int sum = 0;
		for (int i = odd1; i <= odd2; i++) {
			sum = sum + odd[i];
		}
		cout << "Case " << case_num << ": " << sum << endl;
	}
}