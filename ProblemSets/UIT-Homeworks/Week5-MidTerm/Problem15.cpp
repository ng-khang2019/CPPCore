#include <iostream>
using namespace std;
const int namNay = 2026;

int main ()
{
    int namSinh;
    cout<<"Nhap nam sinh: ";
    cin>>namSinh;

    cout<<"Tuoi cua ban la: "<<namNay - namSinh<<endl;
    return 0;
}