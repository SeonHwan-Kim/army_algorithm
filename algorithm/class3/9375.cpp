#include <iostream>
#include <map>

using namespace std;

int main() {
    int T, n;
    string x, y;

    cin >> T;

    for(int i = 0; i < T; i++) {
        int result = 1;
        map<string, int> m;
        cin >> n;
        for(int j = 0; j < n; j++) {
            cin >> x >> y;
            m[y]++;
        }
        map<string, int>::iterator iter;

        for(iter = m.begin(); iter != m.end(); iter++) {
            result *= (iter->second + 1);
        }

        cout << result - 1 << "\n";
    }
}