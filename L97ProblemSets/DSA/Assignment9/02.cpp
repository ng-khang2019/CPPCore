#include <iostream>
#include <queue>
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

void PrintLevelHelper(TREE T, int current, int target, bool &found) {
    if (T == NULL) return;

    if (current == target) {
        cout << T->key << " ";
        found = true;
        return;
    }

    PrintLevelHelper(T->pLeft, current + 1, target, found);
    PrintLevelHelper(T->pRight, current + 1, target, found);
}

void PrintLevel(TREE T, int level) {
    if (T == NULL) {
        cout << "Empty Tree.";
        return;
    }

    if (level < 0) {
        cout << "Khong ton tai level " << level << ".";
        return;
    }

    bool found = false;
    PrintLevelHelper(T, 0, level, found);

    if (!found) {
        cout << "Khong ton tai level " << level << ".";
    }
}



int main() {
    TNODE* T; //hay: TNODE* T;
    T = NULL; // Khoi tao cay T rong, or: CreateEmptyTree(T)
    int level;
    cin >> level;
    CreateTree(T);
    PrintLevel(T, level);
    return 0;
}
