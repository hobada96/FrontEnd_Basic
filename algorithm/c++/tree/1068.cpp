#include <iostream>
#include <vector>

using namespace std;
#define MAX 51

vector<int> vec[MAX];
int root = -1;

int dfs(int n, int deleteNode){
    int cnt = 0;
    if(n == deleteNode) return cnt;
    for(int i = 0 ; i < vec[n].size() ; i++){
        cnt += dfs(vec[n][i], deleteNode);
    }
    if(cnt == 0) cnt = 1;
    return cnt;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        if(temp != -1){
            vec[temp].push_back(i);
        }
        else{
            root = i;
        }
    }
    int del;
    cin >> del;
    cout << dfs(root,del);
    return 0;
}

