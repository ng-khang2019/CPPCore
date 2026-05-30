#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

// Danh cho mang da sap xep!!!
int binarySearch(int arr[], int n, int x)
{
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left)/2;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

// Danh cho mang cach deu!!!
int interpolationSearch(int arr[], int n, int x)
{
    int left = 0, right = n - 1;
    while (left <= right && x >= arr[left] && x <= arr[right]) {
        int pos = left + 1.0*(x-arr[left])*(right-left)/(arr[right]-arr[left]);
        if (arr[pos] == x) return pos;
        if (arr[pos] < x) left = pos + 1;
        else right = pos - 1;
    }
}


int main()
{
    int array[] = {1,3,4,4,2,8,2,6,65,2,65,65,78,65,12,32};
    int sortedArray[] = {1,4,5,6,7,9,10,11,32,45,78,99,122};
    int uniArray[] = {3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33};
    cout<<linearSearch(array, 16, 12)<<endl;
    cout<<binarySearch(sortedArray, 13, 78)<<endl;
    cout<<interpolationSearch(uniArray,16,5)<<endl;
    return 0;
}
