#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

int main() {
	double x1, y1;
	double x2, y2;
	double x3, y3;
	double x4, y4;

	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
		double ansx, ansy;
		//要考慮一和三，一和四，二和三，二和四重複
		if (x1 == x3 && y1 == y3) {
			ansx = x2 + x4 - x1;
			ansy = y2 + y4 - y1;
		}
		else if (x1 == x4 && y1 == y4) {
			ansx = x2 + x3 - x1;
			ansy = y2 + y3 - y1;
		}
		else if (x2 == x3 && y2 == y3) {
			ansx = x1 + x4 - x2;
			ansy = y1 + y4 - y2;
		}
		else {
			ansx = x1 + x3 - x2;
			ansy = y1 + y3 - y2;
		}
		cout << fixed << setprecision(3) << ansx<<" " << ansy << endl;
	}
}