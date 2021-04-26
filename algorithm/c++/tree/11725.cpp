#include <iostream>
#include <vector>

using namespace std;

#define MAX 100001

vector<int> vec[MAX];
int parent[MAX];
bool visited[MAX];

void find(int x) {
    visited[x] = true;
    for (int i = 0; i < vec[x].size(); i++) {
        int next = vec[x][i];
        if (visited[next] == false) {
            parent[next] = x;
            find(next);
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    for (int i = 0; i < N - 1; i++) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        vec[temp1].push_back(temp2);
        vec[temp2].push_back(temp1);
    }
    find(1);

    for (int i = 2; i <= N; i++)
        cout << parent[i] << '\n';
    return 0;
}

