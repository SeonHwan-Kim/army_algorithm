#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[1001];
bool visit[1001];

void dfs(int index) {
    visit[index] = true;
    for(int i = 0; i < graph[index].size(); i++) {
        if(visit[graph[index][i]]) continue;
        dfs(graph[index][i]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, u, v, result = 0;

    cin >> N >> M;

    for(int i = 0; i < M; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i = 1; i <= N; i++) {
        if(visit[i]) continue;
        dfs(i);
        result++;
    }

    cout << result;
}