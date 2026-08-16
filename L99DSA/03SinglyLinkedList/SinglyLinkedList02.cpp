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
    }


    void addHead(int value);
    void addTail(int value);
    void insertNode(int value, int index);

    Node* getNode(int index);
    void setNode(int index, int value);

    void removeHead();
    void removeTail();
    void removeNode(int value);

    void print();
    void reverse();
};
