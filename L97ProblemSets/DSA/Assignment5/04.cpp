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

TNODE* FindMax(TREE T) {

    if (T == NULL) return NULL;

    TNODE* current = T;
    while (current->pRight != NULL) {
        current = current->pRight;
    }
    return current;
}


int main() {
    TREE T; //hay: TNODE* T;
    T = NULL; // Khoi tao cay T rong, or: CreateEmptyTree(T)
    CreateTree(T);

    if(T==NULL) cout << "Empty Tree.";
    else cout << FindMax(T)->key;
    return 0;
}
