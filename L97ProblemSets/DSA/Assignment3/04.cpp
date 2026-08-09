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

void Function(NODE *pHead)
{
    if (pHead == NULL)
    {
        cout << "Empty List." << endl;
        return;
    }
    NODE *pCurrent = pHead;
    NODE *pNext;
    while (pCurrent != NULL )
    {
        pNext = pCurrent -> pNext;
        while (pNext != NULL)
        {
            if (pCurrent -> value > pNext -> value)
            {
                cout << pCurrent -> value << " " << pNext -> value << endl;
                break;
            }

            pNext = pNext -> pNext;
        }

        if (pNext == NULL)
        {
            cout << pCurrent -> value << " " << -1 << endl;
        }
        pCurrent = pCurrent -> pNext;
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
