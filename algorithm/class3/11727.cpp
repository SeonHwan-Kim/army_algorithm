#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> v;

    cin >> n;

    v.push_back(1);
    v.push_back(3);

    for(int i = 2; i < n; i++) {
        v.push_back((v[i - 1] + v[i - 2] * 2) % 10007);
    }

    cout << v[n - 1];
}