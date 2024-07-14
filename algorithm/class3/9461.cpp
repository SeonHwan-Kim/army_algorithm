#include <iostream>

using namespace std;

int main() {
    int T, N;
    long long a[102] = {0, 1, 1, 1, 2, 2};

    cin >> T;

    for(int t = 0; t < T; t++) {
        cin >> N;
        for(int i = 6; i <= N; i++) {
            a[i] = a[i - 1] + a[i - 5];
        }
        cout << a[N] << "\n";
    }
}