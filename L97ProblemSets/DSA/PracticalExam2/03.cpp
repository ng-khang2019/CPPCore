
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

void CountNode_Have2Child(TREE T,int &count)
{
    if (T == nullptr) return;
    if (T->pLeft != nullptr & T->pRight != nullptr) count++;
    CountNode_Have2Child(T->pLeft,count);
    CountNode_Have2Child(T->pRight, count);
}

int main() {
    int count=0;
    TREE T; //hay: TNODE* T;
    T = NULL; // Khoi tao cay T rong, or: CreateEmptyTree(T)
    CreateTree(T);
    CountNode_Have2Child(T, count);
    cout << count;
    return 0;
}
