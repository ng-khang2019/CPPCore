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

void PrintList(NODE *pHead)
{
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
    PrintList(L.pHead);

    return 0;
}
