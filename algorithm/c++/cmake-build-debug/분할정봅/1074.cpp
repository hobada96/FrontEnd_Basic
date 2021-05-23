#include <iostream>
#include <math.h>

using namespace std;
int N, R, C, cnt = 0;
bool found = false;

int main(void) {
    cin >> N >> R >> C;
    while(N){
        int s = (1 << N-1);
        cout << s;
        int q = 0;
        if(R < s && C < s)
            q=0;
        else if(R < s && C >= s)
            q=1;
        else if(R >= s && C < s)
            q=2;
        else if(R >= s && C >= s)
            q=3;
        R %= s;
        C %= s;
        cnt += (s * s) * q;
        --N;
    }
    cout << cnt;
    return 0;
}