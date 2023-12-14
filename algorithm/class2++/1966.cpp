#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main() {
    int N, M, testNumber, importanceLevel, result = 0;
    deque<pair<int, int>> dq;
    deque<int> dqValue;

    cin >> testNumber;

    for(int i = 0; i < testNumber; i++) {
        cin >> N >> M;

        for(int j = 0; j < N; j++) {
            cin >> importanceLevel;
            dq.push_back(pair<int, int>(j, importanceLevel));
            dqValue.push_back(importanceLevel);
        }

        sort(dqValue.begin(), dqValue.end());

        while(true) {
            if(dq.front().second < dqValue.back()) {
                dq.push_back(pair<int, int>(dq.front().first, dq.front().second));
                dq.pop_front();
            } else if(dq.front().second >= dqValue.back() && dq.front().first == M) {
                cout << ++result << "\n";
                break;
            } else {
                dq.pop_front();
                dqValue.pop_back();
                result++;
            }
        }

        dqValue.clear();
        dq.clear();
        result = 0;
    }
}