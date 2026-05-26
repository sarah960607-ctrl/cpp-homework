#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int M;
bool cmp(int a, int b) {
	int ra = a % M;// 找餘數
	int rb = b % M;
	if (ra != rb)
		return ra < rb;//餘數小的排前面
	bool a_odd = (a % 2 != 0);//奇數的話是1,偶數0
	bool b_odd = (b % 2 != 0);
	if (a_odd != b_odd)
		return a_odd;//奇數在前
	if (a_odd && b_odd)
		return a > b;//都是奇數，大的牌前
	return a < b;//都是偶數，小的排前

}
int main(){
	int N;
	while (cin >> N >> M) {
		cout << N << " " << M << endl;
		if (N == 0 && M == 0)
			break;
		vector<int> v(N);
		for (int i = 0; i < N; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end(), cmp);
		for (int x : v)
			cout << x << endl;
	}
}