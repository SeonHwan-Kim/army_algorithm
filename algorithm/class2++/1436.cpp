#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    int i = 666;
    string str;

    cin >> N;

    while(N > 0) {
        str = to_string(i);
        if(str.find("666") != -1) {
            N--;
        }
        i++;
    }

    cout << i - 1;
}