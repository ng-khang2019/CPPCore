#include <iostream>
using namespace std;

int main ()
{
    cout.imbue(locale(""));
    int kwh;
    double tien = 0;
    cout<<"Nhap so kWh tieu thu: ";
    cin>>kwh;

    if (kwh <= 100) {
        tien = kwh * 600;
    } else if (kwh <= 150) {
        tien = 100 * 600 + (kwh - 100) * 700;
    } else if (kwh <= 200) {
        tien = 100 * 600 + 50 * 700 + (kwh - 150) * 900;
    } else {
        tien = 100 * 600 + 50 * 700 + 50 * 900 + (kwh - 200) * 1100;
    }

    cout<<"Tien dien phai tra: " <<(long long) tien << " VND" << endl;
    return 0;
}
