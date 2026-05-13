#include <iostream>
using namespace std;
int main ()
{
    int tnct;
    double luongCoBan = 2340000;
    double heSo;
    cout.imbue(locale(""));

    cout<<"Nhap so thang tham nien cong tac: ";
    cin>>tnct;

    if (tnct >= 60) {
        heSo = 4.5;
    } else if (tnct >= 36) {
        heSo = 3.0;
    } else if (tnct >= 12) {
        heSo = 2.34;
    } else {
        heSo = 1.92;
    }

    double luong = heSo * luongCoBan;
    cout<<fixed<< "Luong cua nhan vien la: "<<(long long)luong <<" VND"<<endl;
    return 0;
}