#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int N, number, result = 0;
    vector<int> v;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> number;
        if(number == 0) {
            v.pop_back();
        } else{
            v.push_back(number);
        }
    }

    cout << accumulate(v.begin(), v.end(), 0);
}