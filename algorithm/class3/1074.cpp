#include <iostream>
#include <cmath>

using namespace std;

int N, r, c;
int result = 0;

void z(int y, int x, int size) {
    if(y == r && x == c) {
        cout << result;
        return;
    } else if(r < y + size && r >= y && c < x + size && c >= x) {
        z(y, x, size / 2);
        z(y, x + size / 2, size / 2);
        z(y + size / 2, x, size / 2);
        z(y + size / 2, x + size / 2, size / 2);
    } else {
        result += size * size;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> r >> c;

    z(0, 0, pow(2, N));
}