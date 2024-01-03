#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T, n, count;
    vector<int> v(11);
    v[1] = 1;
    v[2] = 2;
    v[3] = 4;

    cin >> T;

    for(int i = 4; i < 12; i++) {
        v[i] = v[i - 1] + v[i - 2] + v[i - 3];
    }

    for(int i = 0; i < T; i++) {
        cin >> n;
        cout << v[n] << "\n";
    }
}