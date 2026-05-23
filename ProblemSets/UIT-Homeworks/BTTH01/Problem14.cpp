#include <iostream>
using namespace std;
int main ()
{
    double a, b, c;
    cout<<"Nhap 3 so a, b, c: ";
    cin >>a>>b>>c;

    double m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    cout << "So lon nhat la: " <<m<<endl;
    return 0;
}