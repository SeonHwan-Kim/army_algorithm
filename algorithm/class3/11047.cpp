#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K, x, count = 0;
    vector<int> v;

    cin >> N >> K;

    for(int i = 0; i < N; i++) {
        cin >> x;
        v.push_back(x);
    }

    while(K > 0) {
        if(K < v.back()) {
            v.pop_back();
        } else {
            int x = K / v.back();
            K -= x * v.back();
            count += x;
        }
    }
    cout << count;
}