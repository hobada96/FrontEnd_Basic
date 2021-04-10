#include <iostream>

using namespace std;
int depth;
int N;
string st = "";
bool flag;

void recursive(string st, int depth) {
    if (flag) return;
    int len = st.size();
    for (int i = 1; i <= (len / 2); i++) {
        if (st.substr(len - i, i) == st.substr(len - (2 * i), i)) {
            return;
        }
    }
    if(depth > N) return;
    if (depth == N) {
        flag = true;
        cout << st << "\n";
        return;
    } else {
        for (int i = 0; i < N; i++) {
            recursive(st + "1", depth + 1);
            recursive(st + "2", depth + 1);
            recursive(st + "3", depth + 1);
        }
    }

}

int main() {

    cin >> N;
    recursive(st, 0);
}