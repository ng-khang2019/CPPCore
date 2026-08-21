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

int SumNode(TREE T) {
    if (T == NULL) {
        return 0;
    }
    return T->key + SumNode(T->pLeft) + SumNode(T->pRight);
}

int main() {
    TREE T; //hay: TNODE* T;
    T = NULL; // Khoi tao cay T rong, or: CreateEmptyTree(T)
    CreateTree(T);
    cout << SumNode(T);
    return 0;
}

