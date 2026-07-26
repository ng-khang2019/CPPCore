#include <iostream>
#define MAXN 150000

void NhapMang(int A[], int &N) {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}
void XuatMang(int A[], const int &N) {
    std::cout << N << std::endl;
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}
void hoanvi(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;
}
// Place your code here
int hoarePartition(int A[], int left, int right)
{
    int pivot = A[left + (right - left)/2];
    int i = left -1;
    int j = right +1;
    while (true)
    {
        do i++; while (A[i] < pivot);
        do j--; while (A[j] > pivot);
        if (i >= j) return j;
        hoanvi(A[i],A[j]);
    }
}
void quickSortHelper(int A[], int left, int right)
{
    if (left >= right) return;
    int pivot = hoarePartition(A, left, right);
    quickSortHelper(A, left, pivot);
    quickSortHelper(A, pivot + 1, right);
}

void SapXepNhanh_ascending(int A[], int &N)
{
    int left = 0, right = N - 1;
    quickSortHelper(A, left, right);
}


int main() {
    int a[MAXN], n;

    NhapMang(a, n);

    SapXepNhanh_ascending(a, n);

    XuatMang(a, n);

    return 0;
}


