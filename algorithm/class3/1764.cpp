#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int N, M;
    string x;
    vector<string> v, result;

    cin >> N >> M;

    for(int i = 0; i < N; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < M; i++) {
        cin >> x;
        if(binary_search(v.begin(), v.end(), x)) {
            result.push_back(x);
        }
    }

    sort(result.begin(), result.end());

    cout << result.size() << "\n";

    for(auto o: result) {
        cout << o << "\n";
    }
}