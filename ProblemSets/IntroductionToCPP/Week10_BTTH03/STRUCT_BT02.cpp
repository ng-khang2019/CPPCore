#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct SinhVien
{
    string maSV;
    string hoTen;
    string gioiTinh;
    string diaChi;
    float diem[6];
};

void nhapSinhVien(SinhVien &sv)
{
    cout << "Ma SV: ";
    getline(cin, sv.maSV);

    cout << "Ho ten: ";
    getline(cin, sv.hoTen);

    cout << "Gioi tinh: ";
    getline(cin, sv.gioiTinh);

    cout << "Dia chi: ";
    getline(cin, sv.diaChi);

    cout << "Nhap diem 6 mon:\n";

    for (int i = 0; i < 6; i++)
    {
        cout << "Mon " << i + 1 << ": ";
        cin >> sv.diem[i];
    }

    cin.ignore();
}

void xuatSinhVien(SinhVien sv)
{
    cout << "\nMa SV: " << sv.maSV;
    cout << "\nHo ten: " << sv.hoTen;
    cout << "\nGioi tinh: " << sv.gioiTinh;
    cout << "\nDia chi: " << sv.diaChi;

    cout << "\nDiem: ";

    for (int i = 0; i < 6; i++)
        cout << sv.diem[i] << " ";

    cout << endl;
}

void nhapDanhSach(SinhVien ds[], int &n)
{
    cout << "Nhap so sinh vien: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "\nSinh vien thu " << i + 1 << endl;
        nhapSinhVien(ds[i]);
    }
}

void xuatDanhSach(SinhVien ds[], int n)
{
    for (int i = 0; i < n; i++)
        xuatSinhVien(ds[i]);
}

int timTheoMa(SinhVien ds[], int n, string ma)
{
    for (int i = 0; i < n; i++)
    {
        if (ds[i].maSV == ma)
            return i;
    }

    return -1;
}

int timTheoTen(SinhVien ds[], int n, string ten)
{
    for (int i = 0; i < n; i++)
    {
        if (ds[i].hoTen == ten)
            return i;
    }

    return -1;
}

void themSinhVien(SinhVien ds[], int &n)
{
    cout << "\nNhap thong tin sinh vien moi\n";

    nhapSinhVien(ds[n]);
    n++;
}

void xoaSinhVien(SinhVien ds[], int &n, string ma)
{
    int vt = timTheoMa(ds, n, ma);

    if (vt == -1)
    {
        cout << "Khong tim thay!\n";
        return;
    }

    for (int i = vt; i < n - 1; i++)
        ds[i] = ds[i + 1];

    n--;

    cout << "Da xoa!\n";
}

void xuatSinhVienNoMon(SinhVien ds[], int n)
{
    cout << "\nDANH SACH NO MON\n";

    for (int i = 0; i < n; i++)
    {
        bool noMon = false;

        for (int j = 0; j < 6; j++)
        {
            if (ds[i].diem[j] < 5)
            {
                noMon = true;
                break;
            }
        }

        if (noMon)
            xuatSinhVien(ds[i]);
    }
}

int main()
{
    SinhVien ds[150];
    int n;

    nhapDanhSach(ds, n);

    cout << "\n===== DANH SACH SINH VIEN =====\n";
    xuatDanhSach(ds, n);

    string ma;

    cout << "\nNhap ma sinh vien can tim: ";
    getline(cin, ma);

    int vt = timTheoMa(ds, n, ma);

    if (vt != -1)
        xuatSinhVien(ds[vt]);
    else
        cout << "Khong tim thay!\n";

    themSinhVien(ds, n);

    cout << "\nSau khi them:\n";
    xuatDanhSach(ds, n);

    cout << "\nNhap ma sinh vien can xoa: ";
    getline(cin, ma);

    xoaSinhVien(ds, n, ma);

    cout << "\nSau khi xoa:\n";
    xuatDanhSach(ds, n);

    xuatSinhVienNoMon(ds, n);

    return 0;
}