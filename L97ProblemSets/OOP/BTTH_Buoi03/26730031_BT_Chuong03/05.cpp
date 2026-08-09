#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class cArray {
private:
    int* arr;
    int n;

public:
    // Constructor tao mang ngau nhien tu -50 den 50
    cArray(int size) {
        n = size;
        arr = new int[n];
        srand(time(0));
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 101 - 50;
        }
    }

    // Destructor giai phong bo nho
    ~cArray() {
        delete[] arr;
    }

    void xuat() {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void timAmLonNhat() {
        int maxAm = -999999;
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0 && arr[i] > maxAm) {
                maxAm = arr[i];
                found = true;
            }
        }
        if (found) cout << "So am lon nhat la: " << maxAm << endl;
        else cout << "Khong co so am trong mang." << endl;
    }

    void demSoX(int x) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) count++;
        }
        cout << "So " << x << " xuat hien " << count << " lan." << endl;
    }

    void kiemTraGiamDan() {
        bool giamDan = true;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] < arr[i+1]) {
                giamDan = false;
                break;
            }
        }
        if (giamDan) cout << "Mang co tinh giam dan." << endl;
        else cout << "Mang KHONG giam dan." << endl;
    }

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
        cout << "Mang sau khi sap xep tang dan: ";
        xuat();
    }
};

int main() {
    int n, x;
    cout << "Nhap so luong phan tu n: ";
    cin >> n;

    cArray m(n);
    cout << "Mang ngau nhien vua tao: ";
    m.xuat();

    m.timAmLonNhat();

    cout << "Nhap so nguyen x can dem: ";
    cin >> x;
    m.demSoX(x);

    m.kiemTraGiamDan();
    m.sapXepTangDan();

    return 0;
}