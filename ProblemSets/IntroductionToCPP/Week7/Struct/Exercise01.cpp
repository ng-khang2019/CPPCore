#include <cstring>
#include <iostream>
using namespace std;

struct Student
{
    char ten[50];
    char mssv[10];
    char lop[6];
};

void inputStudent(Student danhSach[], int thuTu)
{
    cout<<"Nhap ten sinh vien: ";
    cin.getline(danhSach[thuTu].ten,50);
    cout<<"Nhap mssv: ";
    cin.getline(danhSach[thuTu].mssv,10);
    cout<<"Nhap lop: ";
    cin.getline(danhSach[thuTu].lop,5);
}

void outputStudent(Student danhSach[], int thuTu)
{
    cout<<"Ho va ten: "<<danhSach[thuTu].ten<<endl;
    cout<<"MSSV:"<<danhSach[thuTu].mssv<<endl;
    cout<<"Lop: "<<danhSach[thuTu].lop<<endl;
}

void inputList(Student danhSach[], int soLuong)
{
    cout<<"Nhap thong tin sinh vien"<<endl;
    for (int i = 0; i < soLuong; i++)
    {
        cout<<"Sinh vien thu "<<i+1<<endl;
        inputStudent(danhSach,i);
        cout<<endl;
    }
}

void outputList(Student danhSach[], int soLuong)
{
    cout<<"Danh sach sinh vien"<<endl;
    for (int i = 0; i < soLuong; i++)
    {
        outputStudent(danhSach,i);
        cout<<"------------------------------"<<endl;
    }
}

int searchStudent(Student danhSach[], int n, char ten[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(danhSach[i].ten,ten) == 0)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Nhap so luong sinh vien: ";
    cin>>n;
    cin.ignore();
    Student sinhVien[n];
    inputList(sinhVien,n);
    char Khang[50] = "Minh Khang";
    int vt = searchStudent(sinhVien,n,Khang);
    if (vt != -1)
    {
        cout<<"Tim thay sinh vien "<<Khang<<" tai vi tri "<<vt<<" trong danh sach"<<endl;
    }
    else
    {
        cout<<"Khong tim thay sinh vien "<<Khang<<endl;
    }
    outputList(sinhVien,n);

    return 0;
}
