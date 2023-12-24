#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int N, M, B, timeResult = INT_MAX, maxHeight = 0;
    int x[500][500];

    cin >> N >> M >> B;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> x[i][j];
        }
    }

    for(int height = 0; height <= 256; height++) {
        int build = 0;
        int remove = 0;

        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                if(x[i][j] > height) {
                    remove += x[i][j] - height;
                } else {
                    build += height - x[i][j];
                }
            }
        }

        if(remove + B >= build) {
            int time = remove * 2 + build;
            if(timeResult >= time) {
                timeResult = time;
                maxHeight = height;
            }
        }
    }

    cout << timeResult << " " << maxHeight;
}