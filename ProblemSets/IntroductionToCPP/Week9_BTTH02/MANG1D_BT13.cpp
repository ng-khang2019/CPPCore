#include <iostream>
using namespace std;
const int MAX = 100;

void insert(int arr[], int &n, int &k, int &v)
{
    while (n >= MAX || n <=0 || k < 0 || k > n)
    {
        cout << "Nhap so phan tu cua mang, n < 100: ";
        cin >> n;
        cout << "Nhap lai vi tri can them: ";
        cin >> k;
        cout << "Nhap gia tri can them: ";
        cin >> v;
    }

    for (int i = n; i > k; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[k] = v;
}

int main()
{
    int n, k, v;
    int arr[MAX] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    insert(arr, n, k, v);
    for (int i = 0; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
