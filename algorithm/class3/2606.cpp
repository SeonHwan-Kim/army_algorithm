#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v[101];
bool visited[101];
int result = 0;

void dfs(int x) {
    visited[x] = true;
    for(int i = 0; i < v[x].size(); i++) {
        if(!visited[v[x][i]]) {
            dfs(v[x][i]);
            result++;
        }
    }
}

int main() {
    int N, M, x, y;

    cin >> N >> M;

    for(int i = 0; i < M; i++) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1);
    cout << result;
}