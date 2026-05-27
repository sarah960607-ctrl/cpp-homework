#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	long long int num;
	int case_num = 0;

	while (cin >> num) {
		int B2 = 1;
		case_num++;
		int list[100] = { 0 };

		for (int i = 0; i < num; i++) {
			cin >> list[i];
		}
		if (list[0] <= 0)
			B2 = 0;
		for (int i = 0; i < num - 1; i++) {//要是嚴格遞增
			if (list[i] >= list[i + 1]) {
				B2 = 0;
				break;
			}
		}
			int check[30000] = { 0 };
			for (int i = 0; i < num; i++) {
				for (int j = i; j < num; j++) {
					int sum = list[i] + list[j];
					if (check[sum] == 0)
						check[sum] = 1;
					else {
						B2 = 0;
						break;
					}
				}
			}
		if (B2 == 1) {
			cout << "Case #" << case_num << ": It is a B2-Sequence.\n";
		}
		else {
			cout << "Case #" << case_num << ": It is not a B2-Sequence.\n";
		}
		cout << endl;
	}
	return 0;
}