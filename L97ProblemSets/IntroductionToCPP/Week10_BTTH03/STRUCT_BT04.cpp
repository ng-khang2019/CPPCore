#include <iostream>
using namespace std;

struct NGAY
{
    int ngay;
    int thang;
    int nam;
};

bool namNhuan(int nam)
{
    return (nam % 400 == 0) ||
           (nam % 4 == 0 && nam % 100 != 0);
}

int soNgayTrongThang(int thang, int nam)
{
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;

    case 4:
    case 6:
    case 9:
    case 11:
        return 30;

    case 2:
        return namNhuan(nam) ? 29 : 28;
    }

    return 0;
}

void nhapNgay(NGAY &d)
{
    cout << "Ngay: ";
    cin >> d.ngay;

    cout << "Thang: ";
    cin >> d.thang;

    cout << "Nam: ";
    cin >> d.nam;
}

void xuatNgay(NGAY d)
{
    cout << d.ngay << "/"
         << d.thang << "/"
         << d.nam;
}

int soNgayTrongNam(NGAY d)
{
    if (namNhuan(d.nam))
        return 366;

    return 365;
}

NGAY ngaySau(NGAY d)
{
    d.ngay++;

    if (d.ngay > soNgayTrongThang(d.thang, d.nam))
    {
        d.ngay = 1;
        d.thang++;

        if (d.thang > 12)
        {
            d.thang = 1;
            d.nam++;
        }
    }

    return d;
}

NGAY ngayTruoc(NGAY d)
{
    d.ngay--;

    if (d.ngay == 0)
    {
        d.thang--;

        if (d.thang == 0)
        {
            d.thang = 12;
            d.nam--;
        }

        d.ngay = soNgayTrongThang(d.thang, d.nam);
    }

    return d;
}

int main()
{
    NGAY d;

    nhapNgay(d);

    cout << "\nNgay vua nhap: ";
    xuatNgay(d);

    cout << "\nSo ngay trong nam: "
         << soNgayTrongNam(d);

    cout << "\nNam "
         << (namNhuan(d.nam) ? "la nam nhuan"
                             : "khong phai nam nhuan");

    NGAY truoc = ngayTruoc(d);
    NGAY sau = ngaySau(d);

    cout << "\nNgay truoc: ";
    xuatNgay(truoc);

    cout << "\nNgay sau: ";
    xuatNgay(sau);

    return 0;
}