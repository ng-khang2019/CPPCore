#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node* next;
    // Node(int value)
    // {
    //     this->value = value;
    //     this->next = nullptr;
    // }

    Node(int value) : value(value),next(nullptr) {}

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
    newNode->value = value;
    newNode->next = nullptr;
    return newNode;
}

void createLinkedList(List& list)
{
    list.pHead = nullptr;
    list.pTail = nullptr;
    list.size = 0;
}

void addHead(LinkedList& list, int value)
{
    Node* newNode = createNode(value);
    if (list.pHead == nullptr)
    {
        list.pHead = newNode;
        list.pTail = newNode;
    }
    else
    {
        newNode->next = list.pHead;
        list.pHead = newNode;
    }
    list.size++;
}

void addTail(LinkedList& list, int value)
{
    Node* newNode = createNode(value);
    if (list.pHead == nullptr)
    {
        list.pHead = newNode;
        list.pTail = newNode;
    }
    else
    {
        list.pTail->next = newNode;
        list.pTail = newNode;
    }
    list.size++;
}

void removeHead(LinkedList& list)
{
    if (list.pHead != nullptr)
    {
        Node* oldHead = list.pHead;
        if (list.pHead == list.pTail)
        {
            list.pHead = nullptr;
            list.pTail = nullptr;
        }
        else
        {
            Node* newHead = list.pHead->next;
            oldHead->next = nullptr;
            list.pHead = newHead;
        }

        delete oldHead;
        list.size--;
    }
}

void removeTail(LinkedList& list)
{
    if (list.pTail != nullptr)
    {
        Node* oldTail = list.pTail;
        if (list.pHead == list.pTail)
        {
            list.pHead = nullptr;
            list.pTail = nullptr;
        }
        else
        {
            Node* prevTail = list.pHead;
            while (prevTail->next != list.pTail)
            {
                prevTail = prevTail->next;
            }

            prevTail->next = nullptr;
            list.pTail = prevTail;
        }

        delete oldTail;
        list.size--;
    }
}

void removeNode(LinkedList& list, int value)
{
    // Cancel if the list is empty
    if (list.pHead == nullptr) return;

    Node* current = list.pHead;
    Node* prev = nullptr;

    while (current != nullptr && current->value != value)
    {
        prev = current;
        current = current->next;
    }

    // Can't find the node
    if (current == nullptr) return;

    // If head node is the node with the value
    if (current == list.pHead)
    {
        list.pHead = current -> next;
    } else
    {
        prev -> next = current -> next;
    }
    // If tail node is the node needed removal
    if (current -> next == nullptr)
    {
        prev -> next = nullptr;
        list.pTail = prev;
    }
    delete current;
    list.size--;
}

bool insertNode(LinkedList& list, int value, int index)
{
    if (index < 0 || index > list.size) return false;
    if (index == 0)
    {
        addHead(list,value);
        return true;
    }
    if (index == list.size)
    {
        addTail(list,value);
        return true;
    }

    int currentPos = 0;
    Node* current = list.pHead;
    Node* prev = nullptr;
    Node* newNode = new Node(value);
    while (currentPos != index)
    {
        prev = current;
        current = current -> next;
        currentPos++;
    }

    prev->next = newNode;
    newNode->next=current;
    list.size++;
    return true;
}

void reverseList(LinkedList& list)
{
    if (list.pHead == nullptr || list.pHead == list.pTail) return;

    Node* prev = nullptr;
    Node* next = nullptr;
    Node* current = list.pHead;

    // Set Tail to Head
    list.pTail = list.pHead;
    while (current != nullptr)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    list.pHead = prev;
}


int main()
{
    return 0;
}
