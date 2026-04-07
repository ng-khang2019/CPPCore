#include <iostream>
using namespace std;

    enum loai {
        XUATSAC = 9, GIOI = 8, KHA = 6, DAT = 5
    };
    int main ()
    {
        float diem; cout<<"Nhập điểm từ (0-10): ";
        cin>>diem; cout<<"Học lực của bạn thuộc loại ";
        if (diem >= XUATSAC) cout<<"Xuất sắc"<<endl;
        else if (diem >= GIOI) cout<<"Giỏi"<<endl;
        else if (diem >= KHA) cout<<"Khá"<<endl;
        else if (diem >= DAT) cout<<"Đạt"<<endl;
        else cout<<"CHƯA ĐẠT"<<endl;
        return 0;
    }

