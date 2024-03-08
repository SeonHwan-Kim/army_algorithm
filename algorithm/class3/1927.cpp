#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n, x;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x == 0) {
            if(pq.size() != 0) {
                cout << pq.top() << "\n";
                pq.pop();
            } else {
                cout << 0 << "\n";
            }
        } else {
            pq.push(x);
        }
    }
}