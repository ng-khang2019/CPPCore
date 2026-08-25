#include <iostream>
#include <string>
#include <vector>

using namespace std;

// --- Lop Abstract ---
class NhanVien {
protected:
    string hoTen;
    string ngaySinh;
    double luongCoBan;
public:
    virtual ~NhanVien() {}
    virtual void nhap() {
        cin.ignore();
        cout << "Ho ten: "; getline(cin, hoTen);
        cout << "Ngay sinh: "; getline(cin, ngaySinh);
        cout << "Luong co ban: "; cin >> luongCoBan;
    }
    virtual void xuat() const {
        cout << "Ho ten: " << hoTen << " | Ngay sinh: " << ngaySinh << " | LCB: " << luongCoBan;
    }
    virtual double tinhLuong() const = 0; // Phương thức thuần ảo

    string getHoTen() const { return hoTen; }
};

// --- Lop Co So Nhan Vien ---
class NhanVienVanPhong : public NhanVien {
private:
    int soNgayLamViec;
    double troCap;
public:
    void nhap() override {
        NhanVien::nhap();
        cout << "So ngay lam viec: "; cin >> soNgayLamViec;
        cout << "Tro cap: "; cin >> troCap;
    }
    double tinhLuong() const override {
        return luongCoBan + soNgayLamViec * 200000 + troCap;
    }
    void xuat() const override {
        NhanVien::xuat();
        cout << " | Luong: " << tinhLuong() << " (Van Phong)" << endl;
    }
};

// --- Lop Ke Thua NVSX ---
class NhanVienSanXuat : public NhanVien {
private:
    int soSanPham;
public:
    void nhap() override {
        NhanVien::nhap();
        cout << "So san pham: "; cin >> soSanPham;
    }
    double tinhLuong() const override {
        return luongCoBan + soSanPham * 2000;
    }
    void xuat() const override {
        NhanVien::xuat();
        cout << " | Luong: " << tinhLuong() << " (San Xuat)" << endl;
    }
};

// --- Lop Ke Thua NVQL---
class NhanVienQuanLy : public NhanVien {
private:
    double heSoChucVu;
    double thuong;
public:
    void nhap() override {
        NhanVien::nhap();
        cout << "He so chuc vu: "; cin >> heSoChucVu;
        cout << "Thuong: "; cin >> thuong;
    }
    double tinhLuong() const override {
        return luongCoBan * heSoChucVu + thuong;
    }
    void xuat() const override {
        NhanVien::xuat();
        cout << " | Luong: " << tinhLuong() << " (Quan Ly)" << endl;
    }
};

// --- Lop Cong Ty ---
class CongTy {
private:
    vector<NhanVien*> danhSachNV;
public:
    ~CongTy() {
        for (NhanVien* nv : danhSachNV) {
            delete nv;
        }
    }

    void nhapDanhSach() {
        int soLuong, loai;
        cout << "Nhap so luong nhan vien: "; cin >> soLuong;
        for (int i = 0; i < soLuong; i++) {
            cout << "\nChon loai NV (1.Van Phong, 2.San Xuat, 3.Quan Ly): ";
            cin >> loai;
            NhanVien* nv = nullptr;
            if (loai == 1) nv = new NhanVienVanPhong();
            else if (loai == 2) nv = new NhanVienSanXuat();
            else if (loai == 3) nv = new NhanVienQuanLy();

            if (nv) {
                nv->nhap();
                danhSachNV.push_back(nv);
            }
        }
    }

    void xuatDanhSach() const {
        cout << "\n--- DANH SACH NHAN VIEN ---" << endl;
        for (NhanVien* nv : danhSachNV) {
            nv->xuat();
        }
    }

    double tinhTongLuong() const {
        double tong = 0;
        for (NhanVien* nv : danhSachNV) {
            tong += nv->tinhLuong();
        }
        return tong;
    }

    void timKiemTheoTen(const string& ten) const {
        cout << "\n--- KET QUA TIM KIEM: " << ten << " ---" << endl;
        bool thay = false;
        for (NhanVien* nv : danhSachNV) {
            if (nv->getHoTen() == ten) {
                nv->xuat();
                thay = true;
            }
        }
        if (!thay) cout << "Khong tim thay nhan vien!" << endl;
    }
};

int main() {
    CongTy abc;
    abc.nhapDanhSach();
    abc.xuatDanhSach();

    cout << "\nTong luong cua cong ty: " << abc.tinhTongLuong() << endl;

    string tenCanTim;
    cout << "\nNhap ten nhan vien can tim: ";
    cin.ignore();
    getline(cin, tenCanTim);
    abc.timKiemTheoTen(tenCanTim);

    return 0;
}