#include <iostream>
#include <queue>

using namespace std;
bool visited[100001];
int n, k;

void bfs() {
    queue<pair<int, int>> q;
    q.push(make_pair(n, 0));

    while(!q.empty()) {
        int x = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if(x == k) {
            cout << cnt;
            break;
        }

        if(x + 1 >= 0 && x + 1 < 100001) {
            if(!visited[x + 1]) {
                visited[x + 1] = true;
                q.push(make_pair(x + 1, cnt + 1));
            }
        }

        if(x - 1 >= 0 && x - 1 < 100001) {
            if(!visited[x - 1]) {
                visited[x - 1] = true;
                q.push(make_pair(x - 1, cnt + 1));
            }
        }
        
        if(x * 2 >= 0 && x * 2 < 100001) {
            if(!visited[x * 2]) {
                visited[x * 2] = true;
                q.push(make_pair(x * 2, cnt + 1));
            }
        }
    }
}

int main() {
    int result = 0;

    cin >> n >> k;

    visited[n] = true;
    bfs();
}