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
    }
}

void RemoveX(LIST &L, int X)
{
    if (L.pHead == NULL)
        return;

    // X nằm ở node đầu
    if (L.pHead->value == X)
    {
        NODE* p = L.pHead;
        L.pHead = L.pHead->pNext;

        if (L.pHead == NULL)
            L.pTail = NULL;

        delete p;
        return;
    }

    // Tìm node đứng trước node cần xóa
    NODE* pCurrent = L.pHead;

    while (pCurrent->pNext != NULL)
    {
        if (pCurrent->pNext->value == X)
        {
            NODE* p = pCurrent->pNext;

            pCurrent->pNext = p->pNext;

            // Nếu xóa node cuối
            if (p == L.pTail)
                L.pTail = pCurrent;

            delete p;
            return;
        }

        pCurrent = pCurrent->pNext;
    }
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
    int X;
    CreateEmptyList(L);

    CreateList(L);
    std::cin >> X;
    RemoveX(L, X);
    PrintList(L);

    return 0;
}