#include <iostream>

using namespace std;

int zero[41] = {1, 0,}, one[41] = {0, 1,};

int main() {
    int T, N;

    cin >> T;

    for(int i = 0; i < T; i++) {
        cin >> N;
        for(int j = 2; j <= N; j++) {
            zero[j] = zero[j - 1] + zero[j - 2];
            one[j] = one[j - 1] + one[j - 2];
        }
        cout << zero[N] << " " << one[N] << "\n";
    }
}