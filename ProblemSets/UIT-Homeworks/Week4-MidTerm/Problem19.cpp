#include <iostream>
using namespace std;

bool namNhuan(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int soNgayTrongThang(int month, int year) {
    switch (month) {
    case 4:
    case 6:
    case 9:
    case 11: return 30;
    case 2: return namNhuan(year) ? 29 : 28;
    default: return 31;
    }
}

int main ()
{
    int d, m, y;
    cout<<"Nhap ngay, thang, nam: ";
    cin>>d>>m>>y;

    if (y < 1 || m < 1 || m > 12 || d < 1 || d > soNgayTrongThang(m, y)) {
        cout << "Ngay thang nam KHONG hop le!" << endl;
        return 1;
    }
    cout<<"Ngay thang nam hop le"<<endl;
    int quy = (m - 1)/3 + 1;
    cout<<"Thang "<<m<<" thuoc quy "<<quy<<endl;

    int next_d = d + 1, next_m = m, next_y = y;
    if (next_d > soNgayTrongThang(m, y)) {
        next_d = 1; next_m++;
        if (next_m > 12) { next_m = 1; next_y++; }
    }
    cout << "Ngay hom sau: " << next_d << "/" << next_m << "/" << next_y << endl;

    int prev_d = d - 1, prev_m = m, prev_y = y;
    if (prev_d == 0) {
        prev_m--;
        if (prev_m == 0) { prev_m = 12; prev_y--; }
        prev_d = soNgayTrongThang(prev_m, prev_y);
    }
    cout<<"Ngay hom truoc: "<<prev_d<<"/"<<prev_m<<"/"<<prev_y<<endl;
    return 0;
}