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

void addHead(LIST &L, int value)
{
    NODE *pNew = CreateNode(value);
    if (L.pHead == NULL)
    {
        L.pHead = pNew;
        L.pTail = pNew;
    } else
    {
        pNew -> pNext = L.pHead;
        L.pHead = pNew;
    }
}
void addTail(LIST &L , int value)
{
    NODE *pNew = CreateNode(value);
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

void CreateList(LIST &L)
{
    int option, input;
    while (true)
    {
        cin >> option;
        switch (option)
        {
            case 0:
                cin >> input;
                addHead(L, input);
                break;
            case 1:
                cin >> input;
                addTail(L, input);
                break;
            case -1:
                return;
        }
    };

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
    PrintList(L);

    return 0;
}