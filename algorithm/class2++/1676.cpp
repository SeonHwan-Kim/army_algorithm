#include <iostream>

using namespace std;

int main() {
    int N;
    int count = 0;

    cin >> N;

    for(int i = 5; i <= N; i *= 5) {
        count += (N / i);
    }

    cout << count;
    return 0;
}