#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int left = 0;
    int right = n -1;
    if (left > right) return -1;
    for (int i = 0; i < n; i++)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] > key) right = mid - 1;
        else left = mid + 1;
    }
}

bool binarySearch2(int arr[], int n, int key)
{
    int left = 0;
    int right = n -1;
    if (left > right) return -1;
    for (int i = 0; i < n; i++)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key) return true;
        if (arr[mid] > key) right = mid - 1;
        else left = mid + 1;
    }
    return false;
}

// Find the first occurance
int binarySearch3(int arr[], int n, int key)
{
    int left = 0;
    int right = n-1;
    if (left > right) return -1;
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
    int arr[] = {1,2,3,4,5,6,7,7,7,7,8,9,10,11,12,13,14,15,16};
    cout<<binarySearch(arr, 16, 12);
    return 0;
}
