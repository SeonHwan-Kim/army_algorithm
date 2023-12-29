#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    string x;
    map<string, int> name;
    map<int, string> num;

    cin >> N >> M;

    for(int i = 0; i < N; i++) {
        cin >> x;
        name[x] = i;
        num[i] = x;
    }

    for(int i = 0; i < M; i++) {
        cin >> x;
        if(isdigit(x.front())) {
            cout << num[stoi(x) - 1] << "\n";
        } else {
            cout << name[x] + 1 << "\n";
        }
    }
}