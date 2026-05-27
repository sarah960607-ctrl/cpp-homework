#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	int N;
	cin >> N;
	while (N--) {
		int M;
		cin >> M;
		int b1 = 0;
		int temp1 = M;

		while (temp1) {		//算有幾個1
			if (temp1 % 2 == 1)
				b1++;
			temp1 /= 2;
		}
		int temp2 = M;
		int value=0;		//十進位
		int power = 1;		//十六的n次方

		while (temp2) {				//十六進位轉十進位
			int digit = temp2 % 10;
			value = value + digit * power;
			power *= 16;
			temp2 /= 10;
		}
		int b2 = 0;
		while (value) {
			if (value % 2 == 1)
				b2++;
			value = value / 2;
		}
		cout << b1 << " " << b2 << endl;
	}
}