// Your code here
#include <iostream>
using namespace std;
struct NODE
{
    int info;
    NODE* pNext;
};

struct LIST
{
    NODE* pHead;
    NODE* pTail;
};

void CreateEmptyList(LIST& L)
{
    L.pHead = nullptr;
    L.pTail = nullptr;
}

NODE* CreateNode(int x)
{
    NODE* p = new NODE;
    if (p == nullptr) return nullptr;
    p->info = x;
    p->pNext = nullptr;
    return p;
}

void AddTail(LIST& L, NODE* p)
{
    if (L.pHead == nullptr)
    {
        L.pHead = L.pTail = p;
    } else
    {
        L.pTail->pNext = p;
        L.pTail = p;
    }
}

void CreateList(LIST& L) {
    int x;
    while (cin >> x && x != -1) {
        NODE* p = CreateNode(x);
        AddTail(L, p);
    }
}

void Function(NODE* pHead) {
    if (pHead == NULL) {
        cout << "Empty List." << endl;
        return;
    }

    for (NODE* p = pHead; p != NULL; p = p->pNext) {
        int nextLesser = -1;
        for (NODE* q = p->pNext; q != NULL; q = q->pNext) {
            if (q->info < p->info) {
                nextLesser = q->info;
                break;
            }
        }
        cout << p->info << " " << nextLesser << endl;
    }
}

int main() {
    LIST L;
    int X;
    CreateEmptyList(L);

    CreateList(L);

    Function(L.pHead);

    return 0;
}

