#include <iostream>
#include <bits/stdc++.h>
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

// Your code here
struct FastIO {
    FastIO() {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
    }
} fast_io_obj;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void XuatMang(int A[], int N) {
    if (N == 0) {
        std::cout << "Mang Rong.\n";
    } else {
        for (int i = 0; i < N; i++) {
            std::cout << A[i] << " ";
        }
        std::cout << "\n";
    }
}

void SoLonNhat(int A[], int N) {
    if (N != 0) {
        //Create temp array
        int* temp = new int[N];
        for (int i = 0; i < N; i++) {
            temp[i] = A[i];
        }

        for (int i = N / 2 - 1; i >= 0; i--) {
            heapify(temp, N, i);
        }

        std::cout << "So lon nhat: " << temp[0] << "\n";

        //Release temp unused memory
        delete[] temp;
    }
}

int main() {
    int a[MAXN], n;

    NhapMang(a, n);

    SoLonNhat(a, n);

    XuatMang(a, n);

    return 0;
}
