#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class cArray {
private:
    int* arr;
    int n;

public:
    cArray(int size = 0) {
        n = size;
        if (n > 0) arr = new int[n];
        else arr = nullptr;
    }
    // Deconstructor giải phóng bộ
    ~cArray() {
        if (arr != nullptr) {
            delete[] arr;
        }
    }

    // 1. Nhập dãy số
    void nhap() {
        cout << "Nhap so phan tu n: ";
        cin >> n;
        arr = new int[n];
        cout << "Nhap cac phan tu: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    // 2. Xuất dãy số
    void xuat() {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // 3. Tạo dãy ngẫu nhiên
    void taoNgauNhien(int size) {
        n = size;
        arr = new int[n];
        srand(time(0));
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 100; // Ngẫu nhiên từ 0-99
        }
    }

    // 4. Đếm số lần xuất hiện của x
    int demX(int x) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) count++;
        }
        return count;
    }

    // 5. Kiểm tra dãy tăng dần
    bool kiemTraTangDan() {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) return false;
        }
        return true;
    }

    // 6. Tìm phần tử lẻ nhỏ nhất
    void timLeNhoNhat() {
        int minLe = 9999999;
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0 && arr[i] < minLe) {
                minLe = arr[i];
                found = true;
            }
        }
        if (found) cout << "Phan tu le nho nhat la: " << minLe << endl;
        else cout << "Khong co phan tu le trong mang." << endl;
    }

    // 7. Sắp xếp tăng dần
    void sapXepTangDan() {
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
};

int main() {
    cArray m1, m2;

    cout << "--- Khoi tao mang thu cong ---" << endl;
    m1.nhap();
    cout << "Mang vua nhap: "; m1.xuat();
    if (m1.kiemTraTangDan()) cout << "Mang tang dan!" << endl;
    else cout << "Mang khong tang dan!" << endl;
    m1.timLeNhoNhat();
    m1.sapXepTangDan();
    cout << "Mang sau khi sap xep: "; m1.xuat();

    cout << "\n--- Khoi tao mang ngau nhien ---" << endl;
    m2.taoNgauNhien(10);
    cout << "Mang ngau nhien 10 phan tu: "; m2.xuat();
    cout << "So 5 xuat hien " << m2.demX(5) << " lan." << endl;

    return 0;
}