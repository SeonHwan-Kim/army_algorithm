#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M, x;
    int result = 0;
    vector<int> v;

    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            for(int k = j + 1; k < N; k++) {
                if(v[i] + v[j] + v[k] <= M && v[i] + v[j] + v[k] > result) {
                    result = v[i] + v[j] + v[k];
                }
            }
        }
    }
    cout << result;
}