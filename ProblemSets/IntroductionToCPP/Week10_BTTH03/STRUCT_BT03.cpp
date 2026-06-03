#include <iostream>
using namespace std;

struct PhanSo
{
    int tu;
    int mau;
};

int UCLN(int a, int b)
{
    a = abs(a);
    b = abs(b);

    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

void nhapPhanSo(PhanSo &p)
{
    do
    {
        cout << "Nhap tu so: ";
        cin >> p.tu;

        cout << "Nhap mau so: ";
        cin >> p.mau;

        if (p.mau == 0)
            cout << "Mau so phai khac 0!\n";

    } while (p.mau == 0);
}

void xuatPhanSo(PhanSo p)
{
    cout << p.tu << "/" << p.mau;
}

void rutGon(PhanSo &p)
{
    int gcd = UCLN(p.tu, p.mau);

    p.tu /= gcd;
    p.mau /= gcd;

    if (p.mau < 0)
    {
        p.tu *= -1;
        p.mau *= -1;
    }
}

bool toiGian(PhanSo p)
{
    return UCLN(p.tu, p.mau) == 1;
}

PhanSo tong(PhanSo a, PhanSo b)
{
    PhanSo kq;

    kq.tu = a.tu * b.mau + b.tu * a.mau;
    kq.mau = a.mau * b.mau;

    rutGon(kq);

    return kq;
}

PhanSo hieu(PhanSo a, PhanSo b)
{
    PhanSo kq;

    kq.tu = a.tu * b.mau - b.tu * a.mau;
    kq.mau = a.mau * b.mau;

    rutGon(kq);

    return kq;
}

PhanSo tich(PhanSo a, PhanSo b)
{
    PhanSo kq;

    kq.tu = a.tu * b.tu;
    kq.mau = a.mau * b.mau;

    rutGon(kq);

    return kq;
}

PhanSo thuong(PhanSo a, PhanSo b)
{
    PhanSo kq;

    kq.tu = a.tu * b.mau;
    kq.mau = a.mau * b.tu;

    rutGon(kq);

    return kq;
}

void quyDong(PhanSo &a, PhanSo &b)
{
    int mauChung = a.mau * b.mau;

    a.tu *= b.mau;
    b.tu *= a.mau;

    a.mau = mauChung;
    b.mau = mauChung;
}

void kiemTraDau(PhanSo p)
{
    if ((long long)p.tu * p.mau > 0)
        cout << "Phan so duong";
    else if ((long long)p.tu * p.mau < 0)
        cout << "Phan so am";
    else
        cout << "Bang 0";
}

int soSanh(PhanSo a, PhanSo b)
{
    long long trai = (long long)a.tu * b.mau;
    long long phai = (long long)b.tu * a.mau;

    if (trai > phai)
        return 1;

    if (trai < phai)
        return -1;

    return 0;
}

int main()
{
    PhanSo a, b;

    cout << "Nhap phan so thu nhat:\n";
    nhapPhanSo(a);

    cout << "Nhap phan so thu hai:\n";
    nhapPhanSo(b);

    cout << "\nTong = ";
    xuatPhanSo(tong(a, b));

    cout << "\nHieu = ";
    xuatPhanSo(hieu(a, b));

    cout << "\nTich = ";
    xuatPhanSo(tich(a, b));

    cout << "\nThuong = ";
    xuatPhanSo(thuong(a, b));

    cout << endl;

    return 0;
}