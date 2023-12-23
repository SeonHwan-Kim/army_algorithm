#include <iostream>
#include <vector>

using namespace std;

int main() {
    int K, N, x;
    long long low = 1, mid, high = 0, ans = 0;
    vector<int> v;

    cin >> K >> N;

    for(int i = 0; i < K; i++) {
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < K; i++) {
        if(v[i] > high) {
            high = v[i];
        }
    }

    while(low <= high) {
        int count = 0;
        mid = (low + high) / 2;

        for(int i = 0; i < K; i++) {
            count += v[i] / mid;
        }

        if (count >= N) {
            if(ans < mid) {
                ans = mid;
            }
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    printf("%lld", ans);
}