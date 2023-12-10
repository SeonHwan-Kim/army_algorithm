#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    while(true) {
        string str;
        stack<char> s;
        bool isBalance = true;

        getline(cin, str);

        if(str == ".") break;
        
        for(int i = 0; i < str.length(); i++) {
            if(str[i] == '(' || str[i] == '[') {
                s.push(str[i]);
            }
            else if(str[i] == ')') {
                if(!s.empty() && s.top() == '(') {
                    s.pop();
                }
                else {
                    cout << "no\n";
                    isBalance = false;
                    break;
                }
            }
            else if(str[i] == ']') {
                if(!s.empty() && s.top() == '[') {
                    s.pop();
                }
                else {
                    cout << "no\n";
                    isBalance = false;
                    break;
                }
            }
        }
        if(s.empty() && isBalance) cout << "yes\n";
        else if(!s.empty() && isBalance) cout << "no\n";
    }
}