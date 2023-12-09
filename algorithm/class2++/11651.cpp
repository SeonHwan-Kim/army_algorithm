#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if(a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}

int main() {
    int N, x, y;
    cin >> N;

    vector<pair<int, int>> v;

    for(int i = 0; i < N; i++) {
        cin >> x >> y;
        v.push_back(pair<int, int> (x, y));
    }

    sort(v.begin(), v.end(), compare);
    
    for(int i = 0; i < N; i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }
}