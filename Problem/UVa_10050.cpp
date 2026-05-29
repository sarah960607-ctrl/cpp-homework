#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int day;
		cin >> day;
		int d[3700] = { 0 };
		int parties_num;
		cin >> parties_num;			//政黨數
		int hartals;
		for (int i = 0; i<parties_num; i++) {			//幾天一次
			cin >> hartals;
			for (int j = 1; j <= day ; j++) {			
				if (j % hartals == 0) {
					d[j]++;
				}
			}
		}
		int fri = 6;
		int sat = 7;
		for (int i = 0; i < ((day / 7)+1); i++) {	//星期五和六不列入計算，把它清零;注意day可能小於7
			d[fri] = 0;
			d[sat] = 0;
			fri += 7;
			sat += 7;
		}
		int work = 0;
		for (int i = 1; i <= day; i++) {
			if (d[i] > 0) {
				work++;
			}
		}
		cout << work << endl;
	}
}