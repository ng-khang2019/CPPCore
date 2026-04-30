#include <iostream>
using namespace std;
int main ()
{
    int tgBatDau, tgKetThuc;
    cout<<"Nhap gio bat dau va ket thuc (8 - 24): ";
    cin>>tgBatDau>>tgKetThuc;

    if (tgBatDau < 8 || tgKetThuc > 24 || tgBatDau >= tgKetThuc) {
        cout<<"Thoi gian khong hop le!"<<endl;
        return 1;
    }

    int tongTG = tgKetThuc - tgBatDau;
    double donGiaDau = 30000;
    double tongBill = 0;

    if (tongTG <= 3) {
        tongBill = tongTG * donGiaDau;
    } else {
        tongBill = 3 * donGiaDau + (tongTG - 3) * (donGiaDau * 0.7);
    }

    if (tgBatDau >= 8 && tgKetThuc <= 17) {
        tongBill *= 0.9;
    }

    cout<<"So tien khach phai tra: "<<(long long) tongBill <<" dong"<<endl;
    return 0;
}