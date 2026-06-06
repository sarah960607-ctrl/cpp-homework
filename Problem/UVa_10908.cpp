#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int M, N, Q;
		cin >> M >> N >> Q;
		vector<string> grid(M);
		for (int i = 0; i < M; i++) {
			cin >> grid[i];
		}
		cout << M << " " << N << " " << Q << endl;
		while (Q--) {
			int x, y;
			cin >> x >> y;
			char center = grid[x][y];

			int ans = 1;
			int k = 1;//正方形擴張多少
			
			while (1) {
				int r1 = x - k;
				int r2 = x + k;
				int r3 = y - k;
				int r4 = y + k;
				if (r1 < 0 || r2 >= M || r3 < 0 || r4 >= N) {
					break;
				}
				bool ok = true;
				for (int i = r1; i <= r2; i++) {
					for (int j = r3; j <= r4; j++) {
						if (grid[i][j] != center) {
							ok = false;
							break;
						}
					}
				}
				if (!ok)
					break;
				ans = 2 * k + 1;
				k++;
			}
			cout << ans << endl;

		}

	}
}