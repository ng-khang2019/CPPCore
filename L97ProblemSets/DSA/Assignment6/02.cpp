#include <iostream>
using namespace std;

struct TNODE {
    int key;
    TNODE* pLeft;
    TNODE* pRight;
};
typedef TNODE* TREE;

void CreateTree(TREE &T) {
    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        TNODE* p = CreateTNode(val);
        Insert(T, p);
    }
}

void FindParent(TREE T, int x) {
    if (T == NULL) {
        cout << "Empty Tree.";
        return;
    }

    if (T->key == x) {
        cout << x << " has no parent.";
        return;
    }

    TNODE* parent = NULL;
    TNODE* current = T;

    while (current != NULL) {
        if (current->key == x) {
            cout << parent->key << " is parent of " << x << ".";
            return;
        }

        parent = current;

        if (x < current->key) {
            current = current->pLeft;
        } else {
            current = current->pRight;
        }
    }

    cout << "Not found " << x << ".";
}


int main() {
    TREE T; //hay: TNODE* T;
    T = NULL; // Khoi tao cay T rong, or: CreateEmptyTree(T)
    CreateTree(T);
    cout << CountNode(T);
    return 0;
}
