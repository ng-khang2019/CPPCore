#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Lớp cơ sở Abstract
class NhanVien {
protected:
    string maNV;
    string hoTen;
    int namSinh;
    double luongCoBan;

public:
    NhanVien() : maNV(""), hoTen(""), namSinh(0), luongCoBan(0) {}
    virtual ~NhanVien() {}

    virtual void nhap() {
        cin.ignore();
        cout << "Nhap ma NV: "; getline(cin, maNV);
        cout << "Nhap ho ten: "; getline(cin, hoTen);
        cout << "Nhap nam sinh: "; cin >> namSinh;
        cout << "Nhap luong co ban: "; cin >> luongCoBan;
    }

    virtual void xuat() const {
        cout << "Ma NV: " << maNV
             << " | Ho ten: " << hoTen
             << " | Nam sinh: " << namSinh
             << " | LCB: " << fixed << setprecision(0) << luongCoBan;
    }

    // Phương thức thuần ảo cho Đa hình
    virtual double tinhLuong() const = 0;
};

// Lớp TaiXe
class TaiXe : public NhanVien {
private:
    int soChuyen;

public:
    TaiXe() : NhanVien(), soChuyen(0) {}

    void nhap() override {
        NhanVien::nhap();
        cout << "Nhap so chuyen van chuyen: "; cin >> soChuyen;
    }

    void xuat() const override {
        NhanVien::xuat();
        cout << " | So chuyen: " << soChuyen
             << " | Luong: " << fixed << setprecision(0) << tinhLuong() << endl;
    }

    double tinhLuong() const override {
        return luongCoBan + (soChuyen * 300000.0);
    }
};

// Lớp NhanVienBocXep
class NhanVienBocXep : public NhanVien {
private:
    double soTanHang;

public:
    NhanVienBocXep() : NhanVien(), soTanHang(0) {}

    void nhap() override {
        NhanVien::nhap();
        cout << "Nhap so tan hang boc xep: "; cin >> soTanHang;
    }

    void xuat() const override {
        NhanVien::xuat();
        cout << " | So tan hang: " << soTanHang
             << " | Luong: " << fixed << setprecision(0) << tinhLuong() << endl;
    }

    double tinhLuong() const override {
        return luongCoBan + (soTanHang * 100000.0);
    }
};

// Lớp CongTy Quản lý
class CongTy {
private:
    vector<NhanVien*> dsNhanVien;

public:
    ~CongTy() {
        for (NhanVien* nv : dsNhanVien) {
            delete nv;
        }
        dsNhanVien.clear();
    }

    void nhapDanhSach() {
        int n;
        cout << "Nhap so luong nhan vien: "; cin >> n;
        for (int i = 0; i < n; ++i) {
            cout << "\n--- Nhap nhan vien thu " << i + 1 << " ---\n";
            cout << "Chon loai NV (1: Tai xe, 2: Boc xep): ";
            int loai;
            cin >> loai;

            NhanVien* nv = nullptr;
            if (loai == 1) {
                nv = new TaiXe();
            } else if (loai == 2) {
                nv = new NhanVienBocXep();
            } else {
                cout << "Loai khong hop le, bo qua.\n";
                continue;
            }

            nv->nhap();
            dsNhanVien.push_back(nv);
        }
    }

    void xuatDanhSach() const {
        cout << "\n================ DANH SACH NHAN VIEN ================\n";
        for (const NhanVien* nv : dsNhanVien) {
            nv->xuat();
        }
    }

    double tinhTongLuong() const {
        double tong = 0;
        for (const NhanVien* nv : dsNhanVien) {
            tong += nv->tinhLuong();
        }
        return tong;
    }
};

int main() {
    CongTy côngTy;
    côngTy.nhapDanhSach();
    côngTy.xuatDanhSach();

    cout << "\n----------------------------------------------------\n";
    cout << "TONG LUONG CONG TY PHAI TRA: "
         << fixed << setprecision(0) << côngTy.tinhTongLuong() << " VNĐ\n";

    return 0;
}