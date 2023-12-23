#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> v(M + 1, 0);
    
    for(int i = 2; i <= M; i++) {
        v[i] = i;
    }

    for(int i = 2; i * i <= M; i++) {
        if(v[i] == 0) continue;
        for(int j = i * 2; j <= M; j += i) {
            if(v[j] == 0) continue;
            else v[j] = 0;
        }
    }

    for(int i = N; i <= M; i++) {
        if(v[i] != 0) cout << v[i] << "\n";
    }
}