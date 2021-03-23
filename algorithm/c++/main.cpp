#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

void recursive(int i, int i1);

int ctn = 0;
vector<int> Mstack;

int main() {
    recursive(0, 3);
    return 0;
}

void recursive(int sum, int goal) {
    if (sum > goal) {
        Mstack.pop_back();
        return;
    } else if (sum == goal) {
        for (auto e : Mstack) {
            cout << e;
        }
        cout << '\n';
        Mstack.pop_back();
        return;
    }
    for (int i = 1; i <= 3; i++) {
        Mstack.push_back(i);
        recursive(sum + i, goal);
    }
}