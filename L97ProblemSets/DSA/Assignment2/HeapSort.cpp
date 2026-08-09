
#include <iostream>
#define MAXN 150000

void NhapMang(int A[], int &N) {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

void heapify(int A[], int N, int i)
{
    int largest = i;
    int leftNode = 2*i +1;
    int rightNode = 2*i + 2;
    if (leftNode < N && A[leftNode] > A[largest])
    {
        largest = leftNode;
    }
    if (rightNode < N && A[rightNode] > A[largest])
    {
        largest = rightNode;
    }
    if (largest != i)
    {
        swap(A[i], A[largest]);
        heapify(A, N, largest);
    }
}

void buildMaxHeap(int A[], int N)
{
    for (int i = N/2 -1; i >= 0; i--) heapify(A, N, i);
}

void HeapSort(int A[], int N)
{
    buildMaxHeap(A, N);

    for (int i = N-1; i > 0; i--)
    {
        swap(A[0], A[i]);
        heapify(A, i, 0);
    }
}



void XuatMang(int A[], const int &N) {
    std::cout << N << std::endl;
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}

int main() {
    int a[MAXN], n;

    NhapMang(a, n);

    HeapSort(a, n);

    XuatMang(a, n);

    return 0;
}
