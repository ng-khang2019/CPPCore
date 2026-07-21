#include <iostream>
using namespace std;

int sentinelLinearSearch(int arr[], int n, int key)
{
    int i = 0;
    int last = arr[n-1];
    arr[n-1] = key;
    while (arr[i] != key) i++;
    arr[n-1] = last;
    if (i < n-1 || arr[n-1] == key) return i;
    return -1;
}

bool sentinelLinearSearch1(int arr[], int n, int key)
{
    int i = 0;
    int last = arr[n-1];
    arr[n-1] = key;
    while (arr[i] != key) i++;
    arr[n-1] = last;
    if (i < n-1 || arr[n-1] == key) return true;
    return false;
}


int main()
{
    int arr[] = {5,3,5,4,8,7,9,8,4,2,3,5,4,8,10};
    int n = std::size(arr);
    int key = 11;
    cout << "Unordered array " <<sentinelLinearSearch(arr, n, key) << endl;

}
