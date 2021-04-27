#include <iostream>
#include <vector>

using namespace std;

#define MAX 10001

vector<int> vec[MAX];
int input;

struct BinTree{
    BinTree* left;
    BinTree* right;
    int value;
};

BinTree* add(BinTree* node, int value){
    if(node == NULL){
        node = new BinTree();
        node->value = value;
        node->left = node->right = NULL;
    }
    else if(value <= node->value){
        node->left = add(node->left, value);
    }
    else node->right = add(node->right,value);
    return node;
}

void postorder(BinTree* node) {
    if (node->left != NULL)
        postorder(node->left);
    if (node->right != NULL)
        postorder(node->right);
    cout << node->value << '\n';
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    BinTree* root = NULL;

    while(cin >> input){
        if(input == EOF) break;
        root = add(root,input);
    }
    postorder(root);
    return 0;
}

