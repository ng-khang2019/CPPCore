#include <iostream>
#define MAXN 150000

void NhapMang(int A[], int &N) {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}

bool isMaxHeap(int a[], int n)
{
    for (int i = 0; i <= (n - 2) / 2; i++)
    {
        int leftChild = 2 * i + 1;
        int rightChild = 2 * i + 2;

        if (leftChild < n && a[i] < a[leftChild])
            return false;

        if (rightChild < n && a[i] < a[rightChild])
            return false;
    }
    return true;
}

int main() {
    int a[MAXN], n;

    NhapMang(a, n);

    std::cout << "MaxHeap: " << std::boolalpha << isMaxHeap(a, n) << std::endl;

    return 0;
}
