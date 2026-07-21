#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Tinh
{
    string maTinh;
    string tenTinh;
    long long danSo;
    double dienTich;
};

void nhapTinh(Tinh &t)
{
    cout << "Ma tinh: ";
    getline(cin, t.maTinh);

    cout << "Ten tinh: ";
    getline(cin, t.tenTinh);

    cout << "Dan so: ";
    cin >> t.danSo;

    cout << "Dien tich: ";
    cin >> t.dienTich;
    cin.ignore();
}

void xuatTinh(Tinh t)
{
    cout << left
         << setw(10) << t.maTinh
         << setw(25) << t.tenTinh
         << setw(15) << t.danSo
         << setw(15) << t.dienTich
         << endl;
}

void nhapDanhSach(Tinh ds[], int &n)
{
    cout << "Nhap so luong tinh: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap tinh thu " << i + 1 << endl;
        nhapTinh(ds[i]);
    }
}

void xuatDanhSach(Tinh ds[], int n)
{
    cout << "\nDANH SACH CAC TINH\n";

    for (int i = 0; i < n; i++)
        xuatTinh(ds[i]);
}

void tinhDanSoLonHon1Trieu(Tinh ds[], int n)
{
    cout << "\nCAC TINH CO DAN SO > 1 TRIEU\n";

    for (int i = 0; i < n; i++)
    {
        if (ds[i].danSo > 1000000)
            xuatTinh(ds[i]);
    }
}

void tinhDienTichLonNhat(Tinh ds[], int n)
{
    int vtMax = 0;

    for (int i = 1; i < n; i++)
    {
        if (ds[i].dienTich > ds[vtMax].dienTich)
            vtMax = i;
    }

    cout << "\nTINH CO DIEN TICH LON NHAT\n";
    xuatTinh(ds[vtMax]);
}

int main()
{
    Tinh ds[100];
    int n;

    nhapDanhSach(ds, n);

    xuatDanhSach(ds, n);

    tinhDanSoLonHon1Trieu(ds, n);

    tinhDienTichLonNhat(ds, n);

    return 0;
}