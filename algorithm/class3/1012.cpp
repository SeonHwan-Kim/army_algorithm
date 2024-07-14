#include <iostream>

using namespace std;

int T, M, N, K, X, Y;
bool a[50][50];

void dfs(int y, int x) {
    if(x < 0 || x >= 50) return;
    if(y < 0 || y >= 50) return;

    if(!a[y][x]) return;

    a[y][x] = false;
    dfs(y + 1, x);
    dfs(y - 1, x);
    dfs(y, x - 1);
    dfs(y, x + 1);
}

int main() {
    cin >> T;

    for(int t = 0; t < T; t++) {
        cin >> M >> N >> K;
        
        for(int i = 0; i < K; i++) {
            cin >> X >> Y;
            a[Y][X] = true;
        }

        int result = 0;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                if(a[i][j]) {
                    result++;
                    dfs(i, j);
                }
            }
        }

        cout << result << "\n";
    }
}