#include <iostream>
#include <math.h>

using namespace std;
int N, R, C, cnt = 0;
bool found = false;

void repeat(int n, int r, int c) {
    if (n == 2) {
        if (r == R && c == C) {
            cout << cnt++;
            found = true;
            return;
        }
        cnt++;
        if (r == R && c + 1 == C) {
            cout << cnt++;
            found = true;
            return;
        }
        cnt++;
        if (r + 1 == R && c == C) {
            cout << cnt++;
            found = true;
            return;
        }
        cnt++;
        if (r + 1 == R && c + 1 == C) {
            cout << cnt++;
            found = true;
            return;
        }
        cnt++;
        return;
    }
    if(!found){
        repeat(n / 2, r, c);
        repeat(n / 2, r, c + n / 2);
        repeat(n / 2, r + n / 2, c);
        repeat(n / 2, r + n / 2, c + n / 2);
    }
}

int main(void) {

    cin >> N >> R >> C;
    repeat(pow(2, N), 0, 0);
    return 0;
}

