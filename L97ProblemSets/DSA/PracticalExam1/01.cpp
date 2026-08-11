
#include <iostream>

using namespace std;
#define MAXN 150000

void NhapMang(int A[], const int N) {
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}

void ChenTang(int x, int a[], int &n) {
    int i;

    for (i = 0; i < n; i++) {
        if (a[i] > x) break;
    }

    for (int j = n; j > i; j--) {
        a[j] = a[j - 1];
    }

    a[i] = x;
    n++;
}


void XuatMang(int A[], const int N) {
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}

int main() {
    int a[MAXN];
    int x; cin >> x;
    int n; cin >> n;

    NhapMang(a, n);

    ChenTang(x, a, n);

    XuatMang(a,n);

    return 0;
}

