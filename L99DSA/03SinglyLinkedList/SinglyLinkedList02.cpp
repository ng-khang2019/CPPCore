#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node* pNext;
    Node() :  value(0), pNext(nullptr) {}
    Node(int value) : value(value), pNext(nullptr) {}
};

class LinkedList
{
public:
    Node* pHead;
    Node* pTail;
    int size;
    LinkedList() : pHead(nullptr), pTail(nullptr), size(0) {}

    ~LinkedList()
    {
        clearList();
    }

    void clearList()
    {
        Node* current = pHead;
        while (current != nullptr)
        {
            Node* next = current -> pNext;
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
            current = current->pNext;
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
            current = current->pNext;
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
            current = current->pNext;
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
            newNode->pNext = pHead;
            pHead = newNode;
        }
        size++;
    }

    void addHead(Node* p)
    {
        if (pHead == nullptr)
        {
            pHead = p;
            pTail = pHead;
        } else
        {
            p->pNext = pHead;
            pHead = p;
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
            pTail->pNext = newNode;
            pTail = newNode;
        }
        size++;
    }

    void addTail(Node* p)
    {
        if (pHead == nullptr)
        {
            pHead = p;
            pTail = p;
        } else
        {
            pTail->pNext = p;
            pTail = p;
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
            current = current -> pNext;
            currentPos++;
        }

        prev->pNext = newNode;
        newNode->pNext=current;
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
                Node* newHead = pHead->pNext;
                oldHead->pNext = nullptr;
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
                while (prevTail->pNext != pTail)
                {
                    prevTail = prevTail->pNext;
                }

                prevTail->pNext = nullptr;
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
            current = current->pNext;
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
            pHead = current -> pNext;
            if (pHead == nullptr) pTail = nullptr;
        } else
        {
            prev -> pNext = current -> pNext;
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
            next = current->pNext;
            current->pNext = prev;
            prev = current;
            current = next;
        }
        pHead = prev;
    }

    int lookUpValue(int value)
    {
        Node* current = pHead;
        int index = 0;
        while (current != nullptr)
        {
            if (current->value == value) return index;
            current = current->pNext;
            index++;
        }
        return -1;
    }
};

class sortList
{
private:
    Node* seperateHead(LinkedList &list)
    {
        if (list.pHead == nullptr) return nullptr;
        Node* splitHead = list.pHead;
        list.pHead = list.pHead->pNext;
        list.size--;
        if (list.pHead == nullptr) list.pTail = nullptr;
        splitHead->pNext = nullptr;
        return splitHead;
    }
    void partition(LinkedList &list, LinkedList &list1, LinkedList &listE, LinkedList &list2)
    {
        if (list.pHead == nullptr) return;
        // Find the middle node
        Node* slow = list.pHead;
        Node* fast = list.pHead;
        while (fast != nullptr && fast->pNext != nullptr)
        {
            slow = slow->pNext;
            fast = fast->pNext->pNext;
        }

        // Swap the middle node and the head
        int temp = list.pHead->value;
        list.pHead->value = slow->value;
        slow->value = temp;

        // Pick the head node as the pivot
        Node* pivot = seperateHead(list);
        listE.addTail(pivot);
        int pivotValue = pivot->value;

        // Partitioning
        Node* current;
        while (list.pHead != nullptr)
        {
            current = seperateHead(list);
            if (current->value > pivotValue) {
                list2.addTail(current);
            }  else if (current->value == pivotValue)
            {
                listE.addTail(current);
            } else
            {
                list1.addTail(current);
            }
        }
    }

    void mergeSplit(LinkedList &list, LinkedList &list1, LinkedList &list2)
    {
        Node* current;
        while (list.pHead != nullptr)
        {
            current = seperateHead(list);
            list1.addTail(current);
            if (list.pHead != nullptr)
            {
                current = seperateHead(list);
                list2.addTail(current);
            }
        }
    }

    void merge(LinkedList &list, LinkedList &list1, LinkedList &list2)
    {
        while (list1.pHead != nullptr && list2.pHead != nullptr)
        {
            if (list1.pHead->value <= list2.pHead->value)
            {
                list.addTail(seperateHead(list1));
            } else
            {
                list.addTail(seperateHead(list2));
            }
        }
        while (list1.pHead != nullptr)
        {
            list.addTail(seperateHead(list1));
        }
        while (list2.pHead != nullptr)
        {
            list.addTail(seperateHead(list2));
        }
    }
public:
    void selectionSort(LinkedList &list)
    {
        Node* current = list.pHead;
        if (current == nullptr || current->pNext == nullptr) return;n;
        while (current != nullptr)
        {
            Node* min = current;
            Node* next = current->pNext;
            while (next != nullptr)
            {
                if (next->value < min->value) min = next;
                next = next->pNext;
            }
            if (min != current) swap(min->value,current->value);
            current = current->pNext;
        }
    }

    void quickSort(LinkedList &list)
    {
        if (list.pHead == nullptr || list.pHead == list.pTail) return;
        LinkedList list1, list2, listE;
        partition(list,list1,listE,list2);
        quickSort(list1);
        quickSort(list2);
        // Merging
        Node* current;
        while (list1.pHead != nullptr)
        {
            current = seperateHead(list1);
            list.addTail(current);
        }
        while (listE.pHead != nullptr)
        {
            current = seperateHead(listE);
            list.addTail(current);
        }
        while (list2.pHead != nullptr)
        {
            current = seperateHead(list2);
            list.addTail(current);
        }
    }

    void mergeSort(LinkedList &list)
    {
        if (list.pHead == nullptr || (list.pHead == list.pTail)) return;
        LinkedList list1, list2;
        mergeSplit(list,list1,list2);
        mergeSort(list1);
        mergeSort(list2);
        merge(list,list1,list2);
    }
};

