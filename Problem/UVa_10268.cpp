#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
string s;
int x;
vector <int> v;

    while (cin >> x) {
        getline(cin, s);
        getline(cin, s);
        stringstream ss(s);
        v.clear();
        while (ss >> s) {
            v.push_back(stoi(s));
        }
        v.pop_back();
        reverse(v.begin(), v.end());
        long long mul = 1;
        int ans = 0;
        for (int i = 0; i < v.size(); i++) {
            ans += v[i] * (i + 1) * mul;
            mul *= x;
        }
        cout << ans << "\n";
    }
}