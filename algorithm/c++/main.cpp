#include<iostream>
#include<vector>
#include<map>

using namespace std;

map<int,vector<int>> mp;
map<int,vector<int>> child;
map<int,int> root;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int par,chil;

    while(true){
        cin >> par >> chil;
        if(par == 0 && chil == 0){
            break;
        }
        mp[par].push_back(chil);
        child[chil].push_back(1);
        if(child[chil].size() == 2) {
            cout << "꺼져";
            return 0;
        }
        //부모 존재, 자식 넣기
        // 자식에 두번나오면 끝
    }
    //

    return 0;
}