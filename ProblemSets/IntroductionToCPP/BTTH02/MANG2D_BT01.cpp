#include <iostream>
using namespace std;
const int MAX = 100;
void nhapMang(int array[][MAX], int &m, int &n)
{
    cout<<"Nhap so dong: "<<endl;
    cin>>m;
    cout<<"Nhap so cot: "<<endl;
    cin>>n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"Nhap phan tu dong "<<i+1<<" cot "<<j+1<<": ";
            cin>>array[i][j];
        }
    }
}

int main()
{
    int array[MAX][MAX],m,n;
    nhapMang(array,m,n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
