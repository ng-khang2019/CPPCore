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

void addNode(LinkedList &list, int value)
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

}

void removeTail(LinkedList &list)
{

}

void removeNode(LinkedList &list, int value)
{

}

bool insertNode(LinkedList &list, int value, int index)
{
    if (index < 0 || index > list.size) return false;
}


int main()
{
    return 0;
}