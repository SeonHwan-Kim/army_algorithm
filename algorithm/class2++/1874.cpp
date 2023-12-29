// #include <iostream>
// #include <vector>
// #include <deque>

// using namespace std;

// int main() {
//     int N, x;
//     deque<int> input;
//     deque<int> stack;
//     vector<int> v;
//     vector<string> result;

//     cin >> N;

//     for(int i = 0; i < N; i++) {
//         cin >> x;
//         input.push_back(x);
//         stack.push_back(i + 1);
//     }

//     while(true) {
//         if(v.size() == 0 && stack.size() != 0) {
//             result.push_back("+");
//             v.push_back(stack.front());
//             stack.pop_front();
//         } else if(input.front() == v.back()) {
//             result.push_back("-");
//             v.pop_back();
//             input.pop_front();
//         } else{
//             if(input.front() > v.back() && input.front() >= stack.front()){
//                 result.push_back("+");
//                 v.push_back(stack.front());
//                 stack.pop_front();
//             } else {
//                 break;
//             }
//         }
//     }

//     if(input.size() != 0) {
//         cout << "NO";
//     } else {
//         for(int i = 0; i < result.size(); i++) {
//             cout << result[i] << "\n";
//         }
//     }
// }

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    stack<int> s;
    vector<char> result;
    
    int cnt = 1;
    int N;

    cin >> N;

    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;

        while(cnt <= x) {
            s.push(cnt);
            cnt++;
            result.push_back('+');
        }

        if(s.top() == x) {
            s.pop();
            result.push_back('-');
        } else {
            continue;
        }
    }

    if(s.size() != 0) {
        cout << "NO";
    } else {
        for(int i = 0; i < result.size(); i++) {
            cout << result[i] << "\n";
        }
    }
}