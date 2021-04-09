#include <iostream>
#include <queue> // use bfs algorithm
#include <stdio.h> // use printf, scanf
#include <cstring> // use memset

using namespace std;
int N, M;
vector<int> arr;

void recursive(int arr_size, vector<int> arr, int j) {
    for(int i=0;i<arr.size();i++){
        if(arr[i] >= j) return;
    }
    arr.push_back(j);
    if(arr.size() == M){
        for(int i=0;i<arr.size();i++){
            cout << arr[i]<<" ";
        }
        cout << "\n";
        return;
    }
    for(int i=0;i<N;i++){
        recursive(arr_size+1,arr, i+1);
    }
}

int main() {
    cin >> N >> M;
    for(int i=0;i<N;i++){
        recursive(i,arr,i+1);
    }

    return 0;
}

