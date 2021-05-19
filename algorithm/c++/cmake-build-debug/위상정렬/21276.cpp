#include<iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>

using namespace std;
map<string, int> idx;
vector<vector<int>> G(1005);
vector<string> v;
vector<vector<int>> children(1005);

int N, M;
int indegree[1005]; // 들어오는 간선수

int main() {
    cin >> N;
    for(int i=0;i<N;++i) {
        string s; cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end()); // 정렬을 하는 이유
    for(int i=0;i<N;++i) idx[v[i]] = i;
    cin >> M;
    for(int i=0;i<M;++i) {
        string a, b;
        cin >> a >> b;
        int u = idx[a];
        int v = idx[b];
        G[v].push_back(u);
        indegree[u]++;
    }
    queue<int> que;
    vector<int> super_father; // 조상
    for(int i=0;i<N;++i) {
        if(indegree[i] == 0) {
            super_father.push_back(i);
            que.push(i);
        }
    }
    while(!que.empty()) {
        int cur = que.front();
        que.pop();
        for(int nxt : G[cur]) {
            indegree[nxt]--;
            if(indegree[nxt] == 0) {
                children[cur].push_back(nxt);
                que.push(nxt);
            }
        }
    }
    cout << super_father.size() << '\n';
    for(int i : super_father) cout << v[i] << ' ';
    cout << '\n';
    for(int i=0;i<N;++i) {
        cout << v[i] << ' ' << children[i].size() << ' ';
        sort(children[i].begin(), children[i].end());
        for(int j : children[i]) cout << v[j] << ' ';
        cout << '\n';
    }
    return 0;
}