#include <iostream>
#include <algorithm>
#include <cmath>
#include <deque>

using namespace std;

int main() {
    int score, intercepts;
    double N, sum = 0;
    deque<int> q;

    cin >> N;

    if(N == 0) {
        cout << "0";
        return 0;
    }

    for(int i = 0; i < N; i++) {
        cin >> score;
        q.push_back(score);
    }

    sort(q.begin(), q.end());

    intercepts = floor((N * 0.15) + 0.5);

    for(int i = 0; i < intercepts; i++) {
        q.pop_back();
        q.pop_front();
    }

    for(int i = 0; i < q.size(); i++) {
        sum += q[i];
    }

    cout << floor((sum / q.size()) + 0.5);
}
