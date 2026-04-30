#include <iostream>
using namespace std;

int main ()
{
    char tiepTuc;
    double tongTien = 0;
    cout.imbue(locale(""));

    do {
        string tenSanPham;
        int soLuong;
        double donGia, tien, thue, tongPhaiTra;

        cout<<"\nNhap ten san pham: ";
        getline(cin, tenSanPham);
        cout<<"Nhap so luong: ";
        cin>>soLuong;
        cout<<"Nhap don gia: ";
        cin>>donGia;

        tien = soLuong * donGia;
        thue = tien * 0.10;
        tongPhaiTra = tien + thue;
        tongTien += tongPhaiTra;

        cout<<"--- Chi tiet hoa don ---"<<endl;
        cout<<"San pham: "<<tenSanPham<<endl;
        cout<<"Tien: "<<(long long) tien<<" dong"<<endl;
        cout<<"Thue GTGT (10%): "<<(long long) thue<<" dong"<<endl;
        cout<<"Tong phai tra cho san pham nay: "<<(long long) tongPhaiTra<<" dong"<<endl;
        cout<<"------------------------"<<endl;

        cout<<"Ban co muon nhap tiep san pham khac khong? (y/n): ";
        cin>>tiepTuc;
        cin.ignore();

    } while (tiepTuc == 'y' || tiepTuc == 'Y');

    cout<<"\nTong so tien can thanh toan cho tat ca san pham: "<<(long long)tongTien<<" dong"<<endl;
    return 0;
}