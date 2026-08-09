#include <iostream>
#include <string>

using namespace std;


class cBook {
private:
    string maSach;
    string tenSach;
    int namXB;
    int soTrang;

public:

    cBook(string ma = "", string ten = "", int nam = 0, int trang = 0) {
        maSach = ma;
        tenSach = ten;
        namXB = nam;
        soTrang = trang;
    }

    void nhap() {
        cout << "Nhap ma sach: "; cin >> maSach;
        cin.ignore();
        cout << "Nhap ten sach: "; getline(cin, tenSach);
        cout << "Nhap nam xuat ban: "; cin >> namXB;
        cout << "Nhap tong so trang: "; cin >> soTrang;
    }

    void xuat() {
        cout << "Ma: " << maSach << " | Ten: " << tenSach
             << " | Nam XB: " << namXB << " | Trang: " << soTrang << endl;
    }


    int getNamXB() { return namXB; }
    string getTenSach() { return tenSach; }
    void setNamXB(int nam) { namXB = nam; }
};

class cListBook {
private:
    cBook* ds;
    int soLuong;

public:
    cListBook(int sl = 0) {
        soLuong = sl;
        if (soLuong > 0) ds = new cBook[soLuong];
        else ds = nullptr;
    }

    ~cListBook() {
        delete[] ds;
    }

    void nhapDanhSach() {
        cout << "Nhap so luong sach trong thu vien: ";
        cin >> soLuong;
        ds = new cBook[soLuong];
        for (int i = 0; i < soLuong; i++) {
            cout << "\n--- Nhap thong tin sach thu " << i + 1 << " ---" << endl;
            ds[i].nhap();
        }
    }

    void xuatDanhSach() {
        cout << "\n====== DANH SACH SACH THU VIEN ======" << endl;
        for (int i = 0; i < soLuong; i++) {
            ds[i].xuat();
        }
        cout << "=====================================" << endl;
    }

    void timSachXBGanNhat() {
        if (soLuong == 0) return;
        int maxNam = ds[0].getNamXB();

        for (int i = 1; i < soLuong; i++) {
            if (ds[i].getNamXB() > maxNam) {
                maxNam = ds[i].getNamXB();
            }
        }

        cout << "\n--- Nhung cuon sach xuat ban gan day nhat (Nam " << maxNam << ") ---" << endl;
        for (int i = 0; i < soLuong; i++) {
            if (ds[i].getNamXB() == maxNam) {
                ds[i].xuat();
            }
        }
    }
};

int main() {
    cListBook thuVien;

    thuVien.nhapDanhSach();
    thuVien.xuatDanhSach();
    thuVien.timSachXBGanNhat();

    return 0;
}