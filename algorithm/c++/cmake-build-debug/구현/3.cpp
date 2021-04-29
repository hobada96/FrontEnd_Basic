#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int arr[301][301] = {0,};
int N, M, R;

int main() {
    cin >> N >> M >> R;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }

    int x1 = 0, y1 = 0;
    int x2 = 0, y2 = M - 1;
    int x3 = N - 1, y3 = M - 1;
    int x4 = N - 1, y4 = 0;

    while (x1 < x4 && y1 < y2) {
        int count = R % ((y2 - y1) * 2 + (x3 - x1) * 2);
        while (count-- > 0) {
            int temp = arr[x1][y1];
            for (int i = y1; i < y2; i++) {
                arr[x1][i] = arr[x1][i + 1];
            }
            for (int i = x2; i < x3; i++) {
                arr[i][y2] = arr[i + 1][y2];
            }
            for (int i = y3; i > y4; i--) {
                arr[x3][i] = arr[x3][i - 1];
            }
            for (int i = x4; i > x1; i--) {
                arr[i][y4] = arr[i - 1][y4];
            }
            arr[x1 + 1][y4] = temp;
        }
        x1 += 1;
        y1 += 1;
        x2 += 1;
        y2 -= 1;
        x3 -= 1;
        y3 -= 1;
        x4 -= 1;
        y4 += 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}