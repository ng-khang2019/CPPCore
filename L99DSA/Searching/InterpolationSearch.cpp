#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int n, int key)
{
    int left = 0;
    int right = n -1;
    if (left > right) return -1;
    while (left <= right)
    {
        int mid  = left + (key-arr[left])* (right-left) / (arr[right] - arr[left]);
        if (arr[mid] == key) return mid;
        if (arr[mid] > key) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90};
    cout<<interpolationSearch(arr, 9, 50);
}