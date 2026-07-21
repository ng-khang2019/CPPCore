#include <iostream>
using namespace std;
const int MAXN = 99999;

void selection_ascending(int arr[], int n)
{
    for (int i = 0; i < n-1;i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n;j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

bool is_ascending(int arr[], int n){
    // Kiểm tra lại kết quả (đảm bảo mảng đã tăng dần)
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

void NhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
}

int main() {
    int a[MAXN], n;

    std::cin >> n;

    NhapMang(a, n);

    selection_ascending(a, n);

    std::cout << std::boolalpha << is_ascending(a, n);

    return 0;
}
