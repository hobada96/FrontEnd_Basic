#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int n;
int inorder[100001]; // 중위
int postorder[100001]; // 후위
int memo[100001];

void preorder(int in_st, int in_end, int post_st, int post_end)
{
    if (in_st > in_end || post_st > post_end) return;
    int root = postorder[post_end];
    int idx = memo[root]; // 인오더에서 루트의 인덱스
    int L = idx - in_st;
    cout << root << " ";

    preorder(in_st, idx - 1, post_st, post_st + L - 1);
    preorder(idx + 1, in_end, post_st + L, post_end - 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> inorder[i];

    for (int i = 1; i <= n; i++)
        cin >> postorder[i];

    // 인오더에서 해당 값이 어디에 있는지 인덱스 기록
    for (int i = 1; i <= n; i++)
        memo[inorder[i]] = i;

    preorder(1, n, 1, n);

}