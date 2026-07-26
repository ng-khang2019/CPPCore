
#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
#define MAXN 500000

void Nhap(int *arr, int &n){
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
}

int hoarePartition(int arr[], int left, int right)
{
    int pivot = arr[left + (right - left)/2];
    int i = left - 1;
    int j = right +1;
    while (true)
    {
        do i++; while (arr[i] < pivot);
        do j--; while (arr[j] > pivot);
        if (i >= j) return j;
        swap(arr[i],arr[j]);
    }
}

void quickSortHoare(int arr[], int left, int right)
{
    if (left >= right) return;
    int pivot = hoarePartition(arr, left, right);
    quickSortHoare(arr, left, pivot);
    quickSortHoare(arr, pivot + 1, right);
}

int findMinValueOfPairs(int arr[], int n)
{
    quickSortHoare(arr, 0, n-1);
    int minValue = abs(arr[1] - arr[0]);
    for (int i = 0; i < n-1; i++)
    {
        minValue = min(minValue, abs(arr[i] - arr[i+1]));
    }
    return minValue;
}


int main() {
    int arr[MAXN], n;
    Nhap(arr, n);

    cout << findMinValueOfPairs(arr, n);

    return 0;
}

