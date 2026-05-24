#include <iostream>
using namespace std;
void xoaGiaTri(int arr[],int &n, int &v, int &count)
{
    cout<<"Nhap vao so phan tu muon xet"<<endl;
    cin>>n;
    cout<<"Nhap vao gia tri muon xoa"<<endl;
    cin>>v;
    int slow = 0, fast = 0;

    for (; fast < n; fast++)
    {
        if (arr[fast] == v) count++;
        if (arr[fast] != v)
        {
            int temp = arr[fast];
            arr[fast] = arr[slow];
            arr[slow] = temp;
            slow++;
        }
    }
}

int main()
{
    int count = 0;
    int n, v;
    int arr[] = {1,2,3,4,1,6,7,8,1,10,1,12,1,14,15};
    xoaGiaTri(arr, n, v, count);
    for (int i = 0; i < n-count; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
