// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// string search(int N, vector<pair<string, string>> v, string address) {
//     int left = 0, right = N, mid;
//     while(right >= left) {
//         mid = (left + right) / 2;
//         int isSame = v[mid].first.compare(address);
//         if(isSame == 0) {
//             return v[mid].second;
//         } else if(isSame < 0) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     int N, M;
//     string address, password;
//     vector<pair<string, string>> v;

//     cin >> N >> M;

//     for(int i = 0; i < N; i++) {
//         cin >> address >> password;
//         v.push_back(pair<string, string>(address, password));
//     }

//     sort(v.begin(), v.end());

//     for(int i = 0; i < M; i++) {
//         cin >> address;
//         cout << search(N - 1, v, address) << "\n";
//     }
// }

#include <iostream>
#include <map>

using namespace std;

int main() {
    int N, M;
    string address, password;

    cin >> N >> M;
    map<string, string> m;

    for(int i = 0; i < N; i++) {
        cin >> address >> password;
        m[address] = password;
    }

    for(int i = 0; i < M; i++) {
        cin >> address;
        cout << m[address] << "\n";
    }
}