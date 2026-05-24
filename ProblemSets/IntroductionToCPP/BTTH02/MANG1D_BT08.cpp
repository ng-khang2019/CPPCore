#include <iostream>
using namespace std;
int sum(int arr[],int &n)
{
    cout<<"Nhap so phan tu muon xet"<<endl;
    cin>>n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    cout<<sum(arr,n)<<endl;
    return 0;
}
