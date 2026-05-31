#include<iostream>
using namespace std;

int main() {
	long long s, d;
	while (cin >> s >> d) {
		long long day = 0;		//累積天數
		long long group = s;//現在的group人數
		while (true) {
			if (day + group >= d) {
				cout << group << endl;
				break;
			}
			day += group;
			group++;	//下一組+1
		}
	}
}