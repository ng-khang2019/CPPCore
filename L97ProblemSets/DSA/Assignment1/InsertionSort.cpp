#include <iostream>
#define MAXN 30000

void NhapMang(int A[], int &N) {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}
void SapXepChen_Decending(int arr[], const int &n)
{
    for (int i = n-2; i >= 0;i--)
    {
        int temp = arr[i];
        int j = i + 1;
        if (temp < arr[j])
        {
            while (j < n && temp < arr[j])
            {
                // Shift
                arr[j-1] = arr[j];
                j++;
            }
        }
        arr[j-1] = temp;
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

    SapXepChen_Decending(a, n);

    XuatMang(a, n);

    return 0;
}