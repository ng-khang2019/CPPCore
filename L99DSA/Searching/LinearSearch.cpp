#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key) return i;
    }
    return -1;
}

int linearSearch2(int arr[], int n, int key)
{
    int index = 0;
    while (index < n && arr[index] != key) index++;
    if (index == n) return -1;
    return index;
}

// Linear Search for Ordered array
int linearSearch3(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > key) return -1;
        if (arr[i] == key) return i;
    }
    return -1;
}

int main()
{
    int arr[] = {5,3,5,4,8,7,9,8,4,2,3,5,4,8,10};
    int n = std::size(arr);
    int key = 11;
    cout << "Unordered array " <<linearSearch2(arr, n, key) << endl;

    int arr1[] = {1,3,4,6,7,9,11,14,15,16,17,19,21};
    int n1 = size(arr1);
    int key1 = 11;
    cout << "Ordered array " << linearSearch3(arr1, n1, key1) << endl;
    return 0;
}
