#include <iostream>
using namespace std;
const int MAX_COL = 4;

void xuatMang2D(int arr[][MAX_COL], int &m, int &n)
{
    while (m <= 0 || n <= 0 || m > MAX_COL || n > MAX_COL)
    {
        cout<<"Nhap vao so dong ban muon in: ";
        cin>>m;
        cout<<"Nhap vao so cot ban muon in: ";
        cin>>n;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int array[4][MAX_COL] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };
    int m, n;
    xuatMang2D(array, m, n);
    return 0;
}
