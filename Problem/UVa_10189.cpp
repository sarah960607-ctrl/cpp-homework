#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int n, m;
	int fieldNum = 0;
	char grid[105][105];

	while (cin >> n >> m) {
		if ((n == 0) && (m == 0))
			break;
		if (fieldNum > 0)
			cout << endl;

		for (int i = 0; i < n; i++) {
			cin >> grid[i];
		}
		fieldNum++;
		cout << "Field #" << fieldNum << ":" << endl;
		int dx[8] = { -1,-1,-1,0,0,1,1,1 };
		int dy[8] = { -1, 0, 1, -1, 1,  -1, 0, 1 };
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				
				if (grid[i][j] == '*') {
					cout << "*";
				}
				else {
					int cnt = 0;
					for (int k = 0; k < 8; k++) {
						int ni = i + dx[k];
						int nj = j + dy[k];
						if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
							if (grid[ni][nj] == '*') {
								cnt++;
							}
						}
					}
				cout << cnt;
				}
			}
			cout << endl;
		}
	}
}