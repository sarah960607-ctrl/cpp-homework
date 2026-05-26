#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int main() {
	string a, b;
	while (getline(cin, a) && getline(cin, b)) {
		
		int A[26] = { 0 };
		int B[26] = { 0 };

		for (int i = 0; i < a.length(); i++) {
			int pos = a[i] - 'a';
			A[pos]++;		//如p=112,a=97，112-97=15，從a數來p在第15個位置
		}
		for (int i = 0; i < b.length(); i++) {
			int pos = b[i] - 'a';
			B[pos]++;
		}
		for (int i = 0; i < 26; i++) {
			if (A[i] >= 1 && B[i] >= 1) {//決定跑幾次
				int times;
				if (A[i] == B[i])
					times = A[i];
				else if (A[i] < B[i])
					times = A[i];
				else
					times = B[i];
				for (int j = 0; j < times; j++) {
					cout << (char)(i + 'a');
				}
			}
		}
		cout << endl;
	}
}
