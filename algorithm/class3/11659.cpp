#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M, x, y;

    cin >> N >> M;

    vector<int> v(N + 1);
    v[0] = 0;

    for(int i = 1; i <= N; i++) {
        cin >> x;
        v[i] = v[i - 1] + x;
    }

    for(int i = 0; i < M; i++) {
        cin >> x >> y;

        cout << v[y] - v[x - 1] << "\n";
    }
}