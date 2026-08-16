#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node* next;
};

struct LinkedList
{
    Node* pHead;
    Node* pTail;
    int size;
};

Node* createNode(int value)
{
    Node* newNode = new Node();
    newNode -> value = value;
    newNode -> next = nullptr;
    return newNode;
}

void createLinkedList(List &list)
{
    list.pHead = nullptr;
    list.pTail = nullptr;
    list.size = 0;
}

void addHead(LinkedList &list, int value)
{
    Node* newNode = createNode(value);
    if (list.pHead == nullptr)
    {
        list.pHead = newNode;
        list.pTail = newNode;
    } else
    {
        newNode -> next = list.pHead;
        list.pHead = newNode;
    }
    list.size++;
}

void addTail(LinkedList &list, int value)
{
    Node* newNode = createNode(value);
    if (list.pHead == nullptr)
    {
        list.pHead = newNode;
        list.pTail = newNode;
    } else
    {
        list.pTail -> next = newNode;
        list.pTail = newNode;
    }
    list.size++;
}

void removeHead(LinkedList &list)
{
    if (list.pHead != nullptr)
    {
        Node* oldHead = list.pHead;
        if (list.pHead == list.pTail)
        {
            list.pHead = nullptr;
            list.pTail = nullptr;
        } else
        {
            Node* newHead = list.pHead -> next;
            oldHead -> next = nullptr;
            list.pHead = newHead;
        }

        delete oldHead;
        list.size--;
    }
}
void removeTail(LinkedList &list)
{
    if (list.pTail != nullptr)
    {
        Node* oldTail = list.pTail;
        if (list.pHead == list.pTail)
        {
            list.pHead = nullptr;
            list.pTail = nullptr;
        } else
        {
            Node* prevTail = list.pHead;
            while (prevTail -> next != list.pTail)
            {
                prevTail = prevTail -> next;
            }

            prevTail -> next = nullptr;
            list.pTail = prevTail;
        }

        delete oldTail;
        list.size--;
    }
}

void removeNode(LinkedList &list, int value)
{

}

bool insertNode(LinkedList &list, int value, int index)
{

}

void reverseList(LinkedList &list)
{

}


int main()
{
    return 0;
}