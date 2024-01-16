#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0); 
	cin.tie(0);

    int n;

    cin >> n;
    vector<int> v(n + 1);
    
    v[1] = 1;

    for(int i = 2; i <= n; i++) {
        int minN = INT_MAX;
        for(int j = 1; j * j <= i; j++) {
            minN = min(minN, v[i - j * j]);
        }
        v[i] = minN + 1;
    }

    cout << v[n];
}