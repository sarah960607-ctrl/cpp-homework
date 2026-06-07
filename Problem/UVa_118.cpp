#include <iostream>
#include <string>
using namespace std;

int main() {
    int maxX, maxY;
    cin >> maxX >> maxY;
    bool scent[51][51] = {false};

    int x, y;
    char d;
    string dir = "NESW";
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    while (cin >> x >> y >> d) {
        string cmd;
        cin >> cmd;
        int idx = dir.find(d);
        bool lost = false;
        for (char c : cmd) {
            if (c == 'L') {
                idx = (idx + 3) % 4;
            }
            else if (c == 'R') {
                idx = (idx + 1) % 4;
            }
            else {
                int nx = x + dx[idx];
                int ny = y + dy[idx];
                if (nx < 0 || nx > maxX ||
                    ny < 0 || ny > maxY) {
                    if (scent[x][y])
                        continue;
                    scent[x][y] = true;
                    lost = true;
                    break;
                }
                x = nx;
                y = ny;
            }
        }
        cout << x << " " << y << " " << dir[idx];

        if (lost)
            cout << " LOST";
        cout << "\n";
    }
}