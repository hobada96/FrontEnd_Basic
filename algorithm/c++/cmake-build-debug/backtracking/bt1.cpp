#include <iostream>
#include <queue> // use bfs algorithm
#include <stdio.h> // use printf, scanf
#include <cstring> // use memset

using namespace std;
int N, M;
vector<int> arr;

void recursive(int arr_size, vector<int> arr, int j) {
    if(arr_size == M+1){
        for(int i=1;i<arr.size();i++){
            cout << arr[i]<<" ";
        }
        cout << "\n";
        return;
    }
    for(int i=1;i<N+1;i++){
        recursive(arr_size+1,arr, i);
    }
}

int main() {
    cin >> N >> M;
    recursive(1,arr,1);
    return 0;
}

