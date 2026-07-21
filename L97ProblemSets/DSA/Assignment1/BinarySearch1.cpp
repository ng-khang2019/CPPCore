#include <iostream>
using namespace std;

bool binarySearch(int arr[], int n, int key)
{
    int left = 0;
    int right = n -1;
    if (left > right) return false;
    for (int i = 0; i < n; i++)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key) return true;
        if (arr[mid] > key) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}


int main()
{
    int value;
    int length;
    cin >> value;
    cin >> length;
    int arr[length];
    for (int i = 0; i < length; i++) cin >> arr[i];
    cout << (binarySearch(arr, length, value) ? "true" : "false")<<endl;
    return 0;
}