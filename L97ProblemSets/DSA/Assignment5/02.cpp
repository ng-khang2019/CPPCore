#include <iostream>
using namespace std;

struct TNODE {
    int key;
    TNODE* pLeft;
    TNODE* pRight;
};
typedef TNODE* TREE;

void Insert(TREE &T, int x) {
    if (T == NULL) {
        T = new TNODE;
        T->key = x;
        T->pLeft = NULL;
        T->pRight = NULL;
    } else {
        if (x < T->key) {
            Insert(T->pLeft, x);
        } else if (x > T->key) {
            Insert(T->pRight, x);
        }
        // Bỏ qua nếu x == T->key vì cây BST thường không chứa giá trị trùng
    }
}

void CreateTree(TREE &T) {
    int x;
    while (true) {
        cin >> x;
        if (x == -1) {
            break;
        }
        Insert(T, x);
    }
}

void RNL(TREE T) {
    if (T == NULL) return;
    RNL(T->pRight);
    cout << T->key << " ";
    RNL(T->pLeft);
}

void PrintTree(TREE T) {
    if (T == NULL) {
        cout << "Empty Tree.";
    } else {
        RNL(T);
    }
}

int main() {
    TREE T; //hay: TNODE* T;
    T = NULL; // Khoi tao cay T rong, or: CreateEmptyTree(T)
    CreateTree(T);
    PrintTree(T);
    return 0;
}
