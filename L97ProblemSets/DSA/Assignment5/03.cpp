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

bool searchNode(TREE T, int x) {
    if (T == NULL) {
        return false;
    }

    if (T->key == x) {
        return true;
    }

    if (x < T->key) {
        return searchNode(T->pLeft, x);
    }

    return searchNode(T->pRight, x);
}


int main() {
    TREE T; //hay: TNODE* T;
    T = NULL; // Khoi tao cay T rong, or: CreateEmptyTree(T)
    CreateTree(T);

    int x;
    cin >> x;
    if(searchNode(T, x)) cout << "true";
    else cout << "false";
    return 0;
}

