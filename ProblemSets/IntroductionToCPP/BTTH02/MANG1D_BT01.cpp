#include <iostream>
using namespace std;

void nhapMang(int array[], int &n) {
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> array[i];
    }
};

int main()
{
    int n;
    int array[10];
    nhapMang(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
