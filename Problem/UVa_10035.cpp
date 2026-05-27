#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int x, y;
	while (cin >> x >> y) {
		if (x == 0 && y == 0)
			break;
		int d1=0, d2 = 0;		//x,y的個位數
		int c = 0;			//要進位的數
		int carry = 0;

		while (1) {
			d1 = x % 10;
			d2 = y % 10;
			if (d1 + d2 +c >= 10) 
				carry++;
			c = d1 + d2 + c;		//要放外面***
			c /= 10;

			x /= 10;
			y /= 10;
			if (x == 0 && y == 0)
				break;
		}
		c = 0;
		if (carry == 0)
			cout << "No carry operation.\n";
		else if (carry == 1)
			cout << "1 carry operation.\n";
		else
			cout << carry << " carry operations.\n";
	}
}
