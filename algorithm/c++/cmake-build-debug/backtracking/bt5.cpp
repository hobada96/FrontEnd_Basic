#include <iostream>
#include <queue> // use bfs algorithm
#include <algorithm>

using namespace std;
int N, M;
vector<int> arr;
vector<int> input_arr;

void recursive(int arr_size, vector<int> arr, int j) {
    for(int i=0;i<arr.size();i++){
        if(arr[i] == input_arr[j]) return;
    }
    arr.push_back(input_arr[j]);
    if(arr.size() == M){
        for(int i=0;i<arr.size();i++){
            cout << arr[i]<<" ";
        }
        cout << "\n";
        return;
    }
    for(int i=0;i<N;i++){
        recursive(arr_size+1,arr, i);
    }
}

int main() {
    cin >> N >> M;
    for(int i=0;i<N;i++){
        int input;
        cin >> input;
        input_arr.push_back(input);
    }
    sort(input_arr.begin(),input_arr.end());
    for(int i=0;i<N;i++){
        recursive(i,arr,i);
    }

    return 0;
}

