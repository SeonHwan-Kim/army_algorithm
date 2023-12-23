#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> v1, pair<int, int> v2) {
    if(v1.second == v2.second) {
        return v1.first < v2.first;
    } else {
        return v1.second > v2.second;
    }
}

int average(vector<int> v, int N) {
    int sum = 0;

    for(int i = 0; i < N; i++) {
        sum += v[i];
    }

    return round(double(sum) / N);
}

int medianValue(vector<int> v, int N) {
    return v[v.size() / 2];
}

int frequentValue(vector<int> v, int N) {
    vector<pair<int, int>> vp;
    vp.push_back(pair<int, int>(v.front(), 1));
    for(int i = 1; i < N; i++) {
        if(vp.back().first == v[i]) {
            vp.back().second++;
        }
        else {
            vp.push_back(pair<int, int>(v[i], 1));
        }
    }
    sort(vp.begin(), vp.end(), compare);

    if(vp[0].second == vp[1].second) {
        return vp[1].first;
    } else {
        return vp[0].first;
    }
}

int range(vector<int> v, int N) {
    return v.back() - v.front();
}

int main() {
    int N, x;
    cin >> N;

    vector<int> v;

    for(int i = 0; i < N; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    cout << average(v, N) << "\n";
    cout << medianValue(v, N) << "\n";
    cout << frequentValue(v, N) << "\n";
    cout << range(v, N) << "\n";
}
