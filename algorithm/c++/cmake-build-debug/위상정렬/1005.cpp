#include <iostream>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

int main(void) {
    int roof;
    cin >> roof;
    for (int i = 0; i < roof; i++) {
        vector<int> adj[1001];
        queue<int> q;
        int n, m, indegree[1001] = {0,}, res[1001], building[1001];
        memset(indegree, 0, sizeof(indegree)); // 테스트케이스 마다 memset으로 초기화
        memset(res, 0, sizeof(res));
        memset(building, 0, sizeof(building));
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            cin >> building[i];
        }
        for (int i = 1; i <= m; i++) {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            indegree[b]++; // 전후 관계를 연결할 때 마다 indegree[]를 올려줍니다.
        }
        int fin;
        cin >> fin;
        for (int i = 1; i <= n; i++) {
            if (indegree[i] == 0) q.push(i);
            res[i] = building[i];
        }
        while (!q.empty()) {
            int now = q.front();
            q.pop();
            for (int i = 0; i < adj[now].size(); i++) {
                int next = adj[now][i];
                res[next] = max(res[next],
                                res[now] + building[next]); // max()를 이용해 모든 indegree를 확인해주고 그 중 최댓값을 res[i]에 할당합니다.
                indegree[next]--;
                if (indegree[next] == 0) q.push(next);
            }
        }
        cout << res[fin] << endl;
    }
    return 0;
}