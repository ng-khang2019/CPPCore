#include <iostream>
using namespace std;

bool sentinelLinearSearch(int arr[], int n, int key)
{
    int i = 0;
    int last = arr[n-1];
    arr[n-1] = key;
    while (arr[i] != key) i++;
    arr[n-1] = last;
    if (i < n-1 || last == key) return true;
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
    cout << (sentinelLinearSearch(arr, length, value) ? "true" : "false")<<endl;
    return 0;
}