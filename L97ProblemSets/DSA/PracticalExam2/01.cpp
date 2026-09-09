#include <iostream>
using namespace std;
// Your code here

struct NODE {
    int info;
    NODE* pNext;
};

struct LIST {
    NODE* pHead;
    NODE* pTail;
};

void CreateEmptyList(LIST& L) {
    L.pHead = NULL;
    L.pTail = NULL;
}

NODE* CreateNode(int x) {
    NODE* p = new NODE;
    if (p == NULL) return NULL;
    p->info = x;
    p->pNext = NULL;
    return p;
}

void AddTail(LIST& L, NODE* p) {
    if (L.pHead == NULL) {
        L.pHead = L.pTail = p;
    } else {
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

int length(LIST L) {
    int count = 0;
    for (NODE* p = L.pHead; p != NULL; p = p->pNext) {
        count++;
    }
    return count;
}

int main() {
    LIST L;
    CreateEmptyList(L);

    CreateList(L);

    cout << length(L);

    return 0;
}


