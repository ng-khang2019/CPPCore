#include <iostream>
using namespace std;

int xoaPhanTu(int arr[], int &n, int &k)
{
    cout<<"Nhap vao so phan tu can xet trong mang"<<endl;
    cin>>n;
    cout<<"Nhap vao chi so k cua phan tu muon xoa"<<endl;
    cin>>k;
    if (k<0 || k>n) return 0;
    for (int i = k;i < n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    return 1;

}


int main()
{
    int n,k;
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    cout<<xoaPhanTu(array,n,k)<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
