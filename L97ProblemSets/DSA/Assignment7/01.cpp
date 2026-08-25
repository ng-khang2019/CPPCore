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

void CreateEmptyList(LIST &L) {
    L.pHead = nullptr;
    L.pTail = nullptr;
}

void CreateList(LIST &L) {
    int x;
    while (cin >> x && x != -1) {
        NODE* p = new NODE;
        p->info = x;
        p->pNext = NULL;

        if (L.pHead == NULL) {
            L.pHead = p;
            L.pTail = p;
        } else {
            L.pTail->pNext = p;
            L.pTail = p;
        }
    }
}

void Print_Middle(LIST L) {
    if (L.pHead == NULL) {
        cout << "Empty List.";
        return;
    }

    NODE* slow = L.pHead;
    NODE* fast = L.pHead;

    while (fast->pNext != NULL && fast->pNext->pNext != NULL) {
        slow = slow->pNext;
        fast = fast->pNext->pNext;
    }

    cout << slow->info;
}

int main() {
    LIST L;
    CreateEmptyList(L);

    CreateList(L);
    Print_Middle(L);

    return 0;
}
