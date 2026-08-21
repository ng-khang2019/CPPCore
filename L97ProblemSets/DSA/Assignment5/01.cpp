#include <iostream>
using namespace std;

struct TNODE {
    int key;
    TNODE* pLeft;
    TNODE* pRight;
};
typedef TNODE* TREE;

TNODE* CreateNode(int x) {
    TNODE* p = new TNODE;
    if (p == NULL) return NULL;
    p->key = x;
    p->pLeft = NULL;
    p->pRight = NULL;
    return p;
}

void Insert(TREE &T, int x) {
    if (T == NULL) {
        T = CreateNode(x);
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

void LNR(const TREE &T) {
    if (T == NULL)
        return;
    LNR(T->pLeft);
    cout << T->key << " ";
    LNR(T->pRight);
}
void PrintTree(const TREE &T){
    if (T==NULL) cout << "Empty Tree.";
    else LNR(T);
}

int main() {
    TREE T; //hay: TNODE* T;
    T = NULL; // Khoi tao cay T rong, or: CreateEmptyTree(T)
    CreateTree(T);
    PrintTree(T);
    return 0;
}
