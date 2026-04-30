#include <iostream>
using namespace std;

int main ()
{
    int monAn;
    cout<<"==== MENU NHA HANG ===="<<endl;
    cout<<"1. Pho bo"<<endl;
    cout<<"2. Bun bo Hue"<<endl;
    cout<<"3. Mi Quang"<<endl;
    cout<<"4. Tra da"<<endl;
    cout<<"Chon mon an (1-4): ";
    cin>>monAn;

    switch (monAn) {
    case 1:
        cout<<"Pho bo - Gia: 50.000 dong"<<endl;
        break;
    case 2:
        cout<<"Bun bo Hue - Gia: 45.000 dong"<<endl;
        break;
    case 3:
        cout<<"Mi Quang - Gia: 45.000 dong"<<endl;
        break;
    case 4:
        cout<<"Tra da - Gia: 5.000 dong"<<endl;
        break;
    default:
        cout<<"Mon nay hien khong co trong menu."<<endl;
    }
    return 0;
}