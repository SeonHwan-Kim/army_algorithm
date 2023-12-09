#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M, x;

    cin >> N;
    int arr[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    cin >> M;
    for(int i = 0; i < M; i++) {
        cin >> x;
        cout << upper_bound(arr, arr + N, x) - lower_bound(arr, arr + N, x) << " ";
    }
}