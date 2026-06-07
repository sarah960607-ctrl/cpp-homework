#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    vector<string> lines;
    string s;

    while (getline(cin, s)) {
        lines.push_back(s);
    }

    int mx = 0;

    for (string str : lines) {
        mx = max(mx, (int)str.size());
    }

    for (int col = 0; col < mx; col++) {

        for (int row = lines.size() - 1; row >= 0; row--) {

            if (col < lines[row].size())
                cout << lines[row][col];
            else
                cout << ' ';
        }

        cout << '\n';
    }
}