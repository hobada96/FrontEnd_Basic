#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<long long> arr;


int t, k;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);

    while (t--) {
        cin >> k;
        int j = 1;
        for (int i = 4; i <= k; i++) {
            if (i % 6 == 0){
                j++;
                arr.push_back(arr[arr.size() - 1] + j);
            }
            else if ((i - 1) % 6 == 0) {
                arr.push_back(arr[arr.size() - 1] + j - 1);
            }
            else arr.push_back(arr[arr.size()-1] + j);
        }
        cout << arr[arr.size()-1];
        cout << '\n';
        arr.clear();
        arr.push_back(0);
        arr.push_back(1);
        arr.push_back(2);
        arr.push_back(3);
    }
    return 0;
}