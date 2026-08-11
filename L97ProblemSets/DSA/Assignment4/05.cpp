
#include <iostream>
using namespace std;

// Cấu trúc của một node
struct NODE {
    int info;
    NODE* pNext;
};
// Cấu trúc của một DSLK
struct LIST {
    NODE* pHead;
    NODE* pTail;
};

NODE* CreateNode(int x) {
    NODE* p;
    p = new NODE;
    //if (p == NULL)
    //		exit(1);

    p->info = x;
    p->pNext = NULL;
    return p;
}
void AddTail(LIST &L, NODE* p) {
    if (L.pHead == NULL) {
        L.pHead = p;
        L.pTail = L.pHead;
    }
    else {
        L.pTail->pNext = p;
        L.pTail=p;
    }
}

void CreateEmptyList(LIST &L) {
    L.pHead = NULL;
    L.pTail = NULL;
}
void CreateList(LIST &L) {
    NODE* p;
    int x;
    do {
        cin >> x;
        if(x==-1) break;
        p = CreateNode(x);
        AddTail(L, p);
    }while(true);
}

NODE* SeperateHead(LIST &L)
{
    NODE* head = L.pHead;
    if (head == NULL) return NULL;
    L.pHead = L.pHead -> pNext;
    if (L.pHead == NULL) L.pTail = NULL;
    head ->pNext = NULL;
    return head;
}

void Join(LIST &L1, LIST &L2, NODE *pivot, LIST &L3) {
    NODE *p;

    while (L2.pHead != NULL) {
        p = SeperateHead(L2);
        AddTail(L1, p);
    }

    AddTail(L1, pivot);

    while (L3.pHead != NULL) {
        p = SeperateHead(L3);
        AddTail(L1, p);
    }
}

void PrintList(LIST L) {
    NODE* p;

    if (L.pHead == NULL)
        cout << "Empty List.";
    else {
        p = L.pHead;
        while (p) {
            cout << p->info << " ";
            p = p->pNext;
        }
    }
    cout << endl;
}


int main() {
    LIST L, L1, L2;

    int x;
    NODE *pivot;

    CreateEmptyList(L);
    CreateEmptyList(L1);
    CreateEmptyList(L2);

    CreateList(L1);
    cin >> x;
    pivot=CreateNode(x);
    CreateList(L2);


    Join(L, L1, pivot, L2);
    PrintList(L);

    return 0;
}
