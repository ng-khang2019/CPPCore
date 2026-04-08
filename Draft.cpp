#include <iostream>
using namespace std;

    int main ()
    {
        char ten[10]; int maMon; char tenMon[20]; float diem;
        cout<<"Nhập tên: ";
        cin>>ten;
        cout<<"Nhập tên môn học: ";
        cin>>tenMon;

        cout<<"Nhập mã môn học và điểm thi\ntheo định dạng aaa-x.x: ";
        scanf("%d-%f",&maMon,&diem);
        printf("%s %03d %s %.1f",ten,maMon,tenMon,diem);

        return 0;
    }

