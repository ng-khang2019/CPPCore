#include <iostream>
using namespace std;

struct NODE
{
    int value;
    NODE *pNext;
};

struct LIST
{
    NODE *pHead;
    NODE *pTail;
};

void CreateEmptyList(LIST &L)
{
    L.pHead = NULL;
    L.pTail = NULL;
}

NODE* CreateNode(int value)
{
    NODE *pNew = new NODE;
    pNew -> value = value;
    pNew -> pNext = NULL;
    return pNew;
}

void CreateList(LIST &L)
{
    int input;
    while (true)
    {
        cin >> input;
        if (input == -1) break;
        NODE *pNew = CreateNode(input);
        if (L.pHead == NULL)
        {
            L.pHead = pNew;
            L.pTail = pNew;
        } else
        {
            L.pTail -> pNext = pNew;
            L.pTail = pNew;
        }
    };

}

void RemoveTail(LIST &L)
{
    if (L.pHead == NULL) return;
    NODE *pCurrent = L.pHead;
    NODE *pPrev = NULL;
    while (pCurrent -> pNext != NULL)
    {
        pPrev = pCurrent;
        pCurrent = pCurrent -> pNext;
    }
    if (L.pHead -> pNext == NULL)
    {
        delete pCurrent;
        L.pHead = NULL;
        L.pTail = NULL;
        return;
    }
    pPrev -> pNext = NULL;
    L.pTail = pPrev;
    delete pCurrent;
}

void PrintList(LIST &L)
{
    NODE *pHead = L.pHead;
    if (pHead == NULL) cout << "Empty List." << endl;
    else
    {
        NODE *pCurrent = pHead;
        while (pCurrent != NULL)
        {
            cout << pCurrent -> value << " ";
            pCurrent = pCurrent -> pNext;
        }
    }
}

int main() {
    LIST L;
    CreateEmptyList(L);

    CreateList(L);
    RemoveTail(L);
    PrintList(L);

    return 0;
}
