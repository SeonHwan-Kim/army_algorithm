#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int M, x, set = 0;
    string operation;

    cin >> M;

    for(int i = 0; i < M; i++) {
        cin >> operation;
        if(operation == "add") {
            cin >> x;
            set |= (1 << x);
        } else if(operation == "remove") {
            cin >> x;
            set &= ~(1 << x);
        } else if(operation == "check") {
            cin >> x;
            if(set & (1 << x)) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else if(operation == "toggle") {
            cin >> x;
            set ^= (1 << x);
        } else if(operation == "all") {
            set = (1 << 21) - 1;
        } else {
            set = 0;
        }
    }
}
