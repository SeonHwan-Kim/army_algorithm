#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, x;
    vector<int> v;
    
    cin >> N;

    vector<int> dp(N + 1);

    for(int i = 0; i < N; i++) {
        cin >> x;
        v.push_back(x);
    }

    dp[1] = v[0];
    dp[2] = v[0] + v[1];
    dp[3] = max(v[0] + v[2], v[1] + v[2]);

    for(int i = 4; i <= N; i++) {
        dp[i] = max(dp[i - 2] + v[i - 1], dp[i - 3] + v[i - 2] + v[i - 1]);
    }

    cout << dp[N];
}