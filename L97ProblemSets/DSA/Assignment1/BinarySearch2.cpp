#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int left = 0;
    int right = n - 1;
    int position = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            position = mid;
            right = mid - 1;
        } else if (arr[mid] > key) right = mid - 1;
        else left = mid + 1;
    }
    return position;
}


int main()
{
    int value;
    int length;
    cin >> value;
    cin >> length;
    int arr[length];
    for (int i = 0; i < length; i++) cin >> arr[i];
    cout << binarySearch(arr, length, value)<<endl;
    return 0;
}