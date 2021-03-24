#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

void recursive(int i, int i1, int i2);

int ctn = 0;
vector<int> Mstack;

int main() {
    int num = 0;
    int order = 0;

    cin >> order;
    cin >> num;
    recursive(0, order , num);
    if(ctn < num) cout << -1;
    return 0;
}

void recursive(int sum, int goal,int num) {
    if (sum > goal) {
        Mstack.pop_back();
        return;
    } else if (sum == goal) {
        ctn++;
        if(ctn == num) {
            for (int i = 0; i < Mstack.size(); i++) {
                cout << Mstack[i];
                if (i != Mstack.size() - 1) cout << '+';
            }
        }
        Mstack.pop_back();
        return;
    }
    for (int i = 1; i <= 3; i++) {
        Mstack.push_back(i);
        recursive(sum + i, goal,num);
    }
    if (Mstack.size() != 0)Mstack.pop_back();
}