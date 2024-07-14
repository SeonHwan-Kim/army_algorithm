#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, n;
    cin >> s;
    bool check = false;
    
    int result = 0;

    for(int i = 0; i <= s.size(); i++) {
        if(s[i] == '-' || s[i] == '+' || i == s.size()) {
            if(check) {
                result -= stoi(n);
                n = "";
            }
            else {
                result += stoi(n);
                n = "";
            }

            if(s[i] == '-') check = true;
        }
        else {
            n += s[i];
        }
    }

    cout << result;
}