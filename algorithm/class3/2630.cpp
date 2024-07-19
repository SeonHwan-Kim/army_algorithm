#include <iostream>
#include <vector>

using namespace std;

vector<int> v[129];
int white = 0;
int blue = 0;

void solve(int y, int x, int size) {
    int check = v[y][x];
    for (int i = y; i < y + size; i++)
    {
        for (int j = x; j < x + size; j++)
        {
            if (check == 0 && v[i][j] == 1) {
                check = 2;
            } else if (check == 1 && v[i][j] == 0) {
                check = 2;
            }

            if (check == 2) {
                solve(y, x, size / 2);
                solve(y, x + size / 2, size / 2);
                solve(y + size / 2, x, size / 2);
                solve(y + size / 2, x + size / 2, size / 2);
                return;
            }
        }
    }
    if (check == 0)
        white++;
    else
        blue++;
}

int main() {
    int n, x;

    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int i = 0; i < n; i++) {
            cin >> x;
            v[i].push_back(x);
        }
    }
    solve(0, 0, n);

    cout << white << "\n" << blue;
}