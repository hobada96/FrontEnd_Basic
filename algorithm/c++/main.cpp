#include <iostream>
#include <vector>

using namespace std;
int depth;
int N,min,max;
vector<int> arr;
string st;

void recursive(string st, int depth) {
    if(depth > N) return;
    if (depth == N) {
        cout << st << "\n";
        return;
    } else {
        for (int i = 0; i < N; i++) {
            recursive(st + "+", depth + 1);
            recursive(st + "-", depth + 1);
            recursive(st + "*", depth + 1);
            recursive(st+"/", depth+1);
        }
    }

}

int main() {

    cin >> N;
    recursive(st, 0);
}