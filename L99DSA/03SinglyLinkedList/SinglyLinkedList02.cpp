#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node* next;
    Node(int value) : value(value), next(nullptr) {}
};

class LinkedList
{
private:
    Node* pHead;
    Node* pTail;
    int size;
public:
    LinkedList() : pHead(nullptr), pTail(nullptr), size(0) {}

    ~LinkedList()
    {
        Node* current = pHead;
        while (current != nullptr)
        {
            Node* next = current -> next;
            delete current;
            current = next;
        }
        pHead = nullptr;
        pTail = nullptr;
        size = 0;
    }

    Node* getNode(int index)
    {
        if (index < 0 || index >= size) return nullptr;
        Node* current = pHead;
        int currentPos = 0;
        while (currentPos != index)
        {
            current = current->next;
            currentPos++;
        }
        return current;
    }

    bool setNode(int index, int value)
    {
        if (index < 0 || index >= size) return false;
        if (index == 0)
        {
            pHead -> value = value;
            return true;
        }
        if (index == size - 1)
        {
            pTail -> value = value;
            return true;
        }

        int currentPos = 0;
        Node* current  = pHead;
        while (currentPos != index)
        {
            current = current->next;
            currentPos++;
        }
        current -> value = value;
        return true;

    }

    void print()
    {
        Node* current = pHead;
        if (current == nullptr) cout << "Empty list." << endl;
        while (current != nullptr)
        {
            cout << current->value << " ";
            current = current->next;
        }
    }

    void addHead(int value)
    {
        Node* newNode = new Node(value);
        if (pHead == nullptr)
        {
            pHead = newNode;
            pTail = newNode;
        }
        else
        {
            newNode->next = pHead;
            pHead = newNode;
        }
        size++;
    }

    void addTail(int value)
    {
        Node* newNode = new Node(value);
        if (pHead == nullptr)
        {
            pHead = newNode;
            pTail = newNode;
        } else
        {
            pTail->next = newNode;
            pTail = newNode;
        }
        size++;
    }

    bool insertNode(int value, int index)
    {
        if (index < 0 || index > size) return false;
        if (index == 0)
        {
            addHead(value);
            return true;
        }
        if (index == size)
        {
            addTail(value);
            return true;
        }

        int currentPos = 0;
        Node* current = pHead;
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
        size++;
        return true;
    }

    void removeHead()
    {
        if (pHead != nullptr)
        {
            Node* oldHead = pHead;
            if (pHead == pTail)
            {
                pHead = nullptr;
                pTail = nullptr;
            }
            else
            {
                Node* newHead = pHead->next;
                oldHead->next = nullptr;
                pHead = newHead;
            }
            delete oldHead;
            size--;
        }
    }

    void removeTail()
    {
        if (pTail != nullptr)
        {
            Node* oldTail = pTail;
            if (pHead == pTail)
            {
                pHead = nullptr;
                pTail = nullptr;
            }
            else
            {
                Node* prevTail = pHead;
                while (prevTail->next != pTail)
                {
                    prevTail = prevTail->next;
                }

                prevTail->next = nullptr;
                pTail = prevTail;
            }

            delete oldTail;
            size--;
        }
    }

    void removeNode(int value)
    {
        // Cancel if the list is empty
        if (pHead == nullptr) return;

        Node* current = pHead;
        Node* prev = nullptr;

        while (current != nullptr && current->value != value)
        {
            prev = current;
            current = current->next;
        }

        // Can't find the node
        if (current == nullptr)
        {
            cout << "No element found with such value " << endl;
            return;
        }

        // If head node is the node with the value
        if (current == pHead)
        {
            pHead = current -> next;
            if (pHead == nullptr) pTail = nullptr;
        } else
        {
            prev -> next = current -> next;
            if (current == pTail) pTail = prev;
        }
        delete current;
        size--;
    }

    void reverse()
    {
        if (pHead == nullptr || pHead == pTail) return;

        Node* prev = nullptr;
        Node* next = nullptr;
        Node* current = pHead;

        // Set Tail to Head
        pTail = pHead;
        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        pHead = prev;
    }
};
