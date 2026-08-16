#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class MaTran {
private:
    int m, n; // m dòng, n cột
    int** data; // Mảng 2 chiều

public:
    MaTran(int dong = 0, int cot = 0) : m(dong), n(cot) {
        if (m > 0 && n > 0) {
            data = new int*[m];
            for (int i = 0; i < m; i++) {
                data[i] = new int[n](); // Khởi tạo mảng = 0
            }
        } else {
            data = nullptr;
        }
    }

    // Copy Constructor
    MaTran(const MaTran& mt) : m(mt.m), n(mt.n) {
        data = new int*[m];
        for (int i = 0; i < m; i++) {
            data[i] = new int[n];
            for (int j = 0; j < n; j++) {
                data[i][j] = mt.data[i][j];
            }
        }
    }

    ~MaTran() {
        if (data) {
            for (int i = 0; i < m; i++) delete[] data[i];
            delete[] data;
        }
    }

    // Nhập ma trận từ bàn phím
    void nhap() {
        cout << "Nhap so dong (m): "; cin >> m;
        cout << "Nhap so cot (n): "; cin >> n;
        
        data = new int*[m];
        for (int i = 0; i < m; i++) {
            data[i] = new int[n];
            for (int j = 0; j < n; j++) {
                cout << "A[" << i << "][" << j << "] = ";
                cin >> data[i][j];
            }
        }
    }

    // Tạo ma trận ngẫu nhiên
    void taoNgauNhien(int dong, int cot) {
        m = dong; n = cot;
        data = new int*[m];
        for (int i = 0; i < m; i++) {
            data[i] = new int[n];
            for (int j = 0; j < n; j++) {
                data[i][j] = rand() % 20; // 0 den 19
            }
        }
    }

    void xuat() const {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << data[i][j] << "\t";
            }
            cout << endl;
        }
    }

    // Operator +
    MaTran operator+(const MaTran& mt) const {
        if (m != mt.m || n != mt.n) {
            cout << "Loi: Hai ma tran khong cung kich thuoc!" << endl;
            return MaTran(0, 0);
        }
        MaTran kq(m, n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                kq.data[i][j] = data[i][j] + mt.data[i][j];
            }
        }
        return kq;
    }

    // Operator -
    MaTran operator-(const MaTran& mt) const {
        if (m != mt.m || n != mt.n) {
            cout << "Loi: Hai ma tran khong cung kich thuoc!" << endl;
            return MaTran(0, 0);
        }
        MaTran kq(m, n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                kq.data[i][j] = data[i][j] - mt.data[i][j];
            }
        }
        return kq;
    }
};

int main() {
    srand(time(0));
    
    MaTran A, B;
    
    // Bài toán yêu cầu tạo 2 ma trận (ta tạo tự động cho nhanh nhé, bạn có thể gọi A.nhap() nếu muốn nhập tay)
    int dong = 3, cot = 3; // Kích thước cố định để test cộng trừ
    cout << "--- Tao Ma Tran A (3x3 ngau nhien) ---" << endl;
    A.taoNgauNhien(dong, cot);
    A.xuat();

    cout << "\n--- Tao Ma Tran B (3x3 ngau nhien) ---" << endl;
    B.taoNgauNhien(dong, cot);
    B.xuat();

    cout << "\n--- Tong A + B ---" << endl;
    MaTran Tong = A + B;
    Tong.xuat();

    cout << "\n--- Hieu A - B ---" << endl;
    MaTran Hieu = A - B;
    Hieu.xuat();

    return 0;
}