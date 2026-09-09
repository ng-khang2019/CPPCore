#include <iostream>
using namespace std;

struct TNODE {
    int key;
    TNODE* pLeft;
    TNODE* pRight;
};
typedef TNODE* TREE;

void Insert(TREE& T, int x)
{
    if (T == nullptr)
    {
        TNODE* p = new TNODE;
        p->key = x;
        p->pLeft = p->pRight = nullptr;
        T = p;
    } else
    {
        if (x < T->key)
        {
            Insert(T->pLeft, x);
        } else if (x > T->key)
        {
            Insert(T->pRight,x);
        }
    }
}

void CreateTree(TREE &T)
{
    int x;
    while (cin >> x && x != -1)
    {
        Insert(T,x);
    }
}

TNODE* FindMin(TREE T)
{
    if (T == nullptr) return nullptr;
    while (T->pLeft != nullptr)
    {
        T = T->pLeft;
    }
    return T;
}

int main() {
    TREE T; //hay: TNODE* T;
    T = NULL; // Khoi tao cay T rong, or: CreateEmptyTree(T)
    CreateTree(T);

    if(T==NULL) cout << "Empty Tree.";
    else cout << FindMin(T)->key;
    return 0;
}
