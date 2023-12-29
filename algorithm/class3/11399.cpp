#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, x, result = 0;
    vector<int> v;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < N; i++) {
        result += v[i] * (N - i);
    }
    cout << result;
}