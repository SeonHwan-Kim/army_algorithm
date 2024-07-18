#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, x;
    
    vector<long long> v1;
    vector<long long> v2;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> x;
        v1.push_back(x);
        v2.push_back(x);
    }

    sort(v2.begin(), v2.end());
    
    v2.erase(unique(v2.begin(), v2.end()), v2.end());

    for(int i = 0; i < N; i++) {
        int a = lower_bound(v2.begin(), v2.end(), v1[i]) - v2.begin();
        cout << a << " ";
    }
}