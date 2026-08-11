
#include <iostream>
using namespace std;

// Cấu trúc của một node
struct NODE {
    int info;
    NODE* pNext;
};
// Cấu trúc của một DSLK
struct LIST {
    NODE* pHead;
    NODE* pTail;
};

NODE* CreateNode(int x) {
    NODE* p;
    p = new NODE;
    //if (p == NULL)
    //		exit(1);

    p->info = x;
    p->pNext = NULL;
    return p;
}
void AddTail(LIST &L, NODE* p) {
    if (L.pHead == NULL) {
        L.pHead = p;
        L.pTail = L.pHead;
    }
    else {
        L.pTail->pNext = p;
        L.pTail=p;
    }
}

void CreateEmptyList(LIST &L) {
    L.pHead = NULL;
    L.pTail = NULL;
}
void CreateList(LIST &L) {
    NODE* p;
    int x, n;
    cin >> n; // Số lượng phần tử của danh sách
    while (n-->0) {
        cin >> x;
        p = CreateNode(x);
        AddTail(L, p);
    }
}


int length(NODE *p){
    int i=0;
    while (p) {
        i++;
        p = p->pNext;
    }
    return i;
}

void PrintList(NODE* p) {
    if (p == NULL)
        cout << "Empty List.";
    else {
        // cout << boolalpha << is_ascending(p) << endl;
        cout << length(p) << endl;
        while (p) {
            cout << p->info << " ";
            p = p->pNext;
        }
    }
}

NODE* SeperateHead(LIST &L) {
    if (L.pHead == NULL) return NULL;
    NODE* head = L.pHead;
    L.pHead = L.pHead->pNext;
    if (L.pHead == NULL) L.pTail = NULL;
    head->pNext = NULL;
    return head;
}

void Partition(LIST &L, LIST &L1, LIST &Leq, LIST &L2) {
    if (L.pHead == NULL) return;

    // TỐI ƯU 1: Tránh TLE với mảng đã sắp xếp sẵn
    // Tìm phần tử ở giữa và tráo đổi giá trị lên đầu làm Pivot
    NODE* slow = L.pHead;
    NODE* fast = L.pHead;
    while (fast != NULL && fast->pNext != NULL) {
        slow = slow->pNext;
        fast = fast->pNext->pNext;
    }
    int temp = L.pHead->info;
    L.pHead->info = slow->info;
    slow->info = temp;

    // Tách node đầu tiên làm pivot
    NODE* pivotNode = SeperateHead(L);
    AddTail(Leq, pivotNode); // Danh sách Leq chứa các phần tử BẰNG pivot
    int pivotVal = pivotNode->info;

    // TỐI ƯU 2: Phân chia làm 3 mảng (Chống TLE với mảng nhiều phần tử trùng nhau)
    NODE* current;
    while (L.pHead != NULL) {
        current = SeperateHead(L);
        if (current->info < pivotVal) {
            AddTail(L1, current);
        } else if (current->info == pivotVal) {
            AddTail(Leq, current);
        } else {
            AddTail(L2, current);
        }
    }
}

void quicksort_ascending(LIST &L) {
    // Sửa lỗi Runtime Error: Chặn danh sách rỗng hoặc có 1 phần tử
    if (L.pHead == NULL || L.pHead == L.pTail) return;

    LIST L1, Leq, L2;
    CreateEmptyList(L1);
    CreateEmptyList(Leq);
    CreateEmptyList(L2);

    Partition(L, L1, Leq, L2);

    // Chỉ đệ quy mảng nhỏ hơn và mảng lớn hơn
    quicksort_ascending(L1);
    quicksort_ascending(L2);

    // Gộp 3 danh sách lại vào L theo đúng thứ tự
    NODE* current;
    while (L1.pHead != NULL) {
        current = SeperateHead(L1);
        AddTail(L, current);
    }
    while (Leq.pHead != NULL) {
        current = SeperateHead(Leq);
        AddTail(L, current);
    }
    while (L2.pHead != NULL) {
        current = SeperateHead(L2);
        AddTail(L, current);
    }
}

int main() {
    LIST L;
    CreateEmptyList(L);

    CreateList(L);
    quicksort_ascending(L);
    PrintList(L.pHead);

    return 0;
}
