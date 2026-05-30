#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	int S;
	cin >> S;
	while (S--) {
		int N;
		cin >> N;		//N players
		double p;		//**有小數點的部分用double
		cin >> p;
		int I;
		cin >> I;

		if (p==0) {         //要記得p==0的部分
			cout << "0.0000" << endl;
			continue;
		}
		double P = 0;		//P=a/b;
		double a = p*pow(1-p,I-1);
		double b = 1-pow(1-p,N);
		double q = 1 - p;
		
		
		cout <<fixed<<setprecision(4)<< a / b << endl;
	}
}