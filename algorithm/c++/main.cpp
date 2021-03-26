#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int repeat, goal;
    vector<long long int> DP;

    cin >> repeat;
    for (int i = 0; i < repeat; i++) {
        DP.push_back(1);
        DP.push_back(2);
        DP.push_back(4);
        cin >> goal;
        if (goal <=3) {
            cout << DP[goal - 1];
            cout << "\n";
        }
        else {
            for (int j = 4; j <= goal; j++) {
                DP.push_back(((DP[0] + DP[1] + DP[2]))%1000000009);
                DP.erase(DP.begin());
            }
            cout << DP[DP.size() - 1] % 1000000009;
            cout << "\n";
            DP.clear();
        }

    }

    return 0;
}