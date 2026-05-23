#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    unsigned int x;
    cout<<"Nhap n: "<<endl;
    cin>>n;
    cout<<"Nhap x: "<<endl;
    cin>>x;
    unsigned long long suma = 0;
    double sumb = 1;
    double sumc = 0;
    double sumd = 0;
    double tu = 1;
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            suma += i;
            sumb += (double) 1/(2*i+1);
            sumc += (double) 1/(i*(i+1));

            tu *= x;
            sumd += (double) x/suma;
        }
    } else {
        cout<<"n phai lon hon 0!"<<endl;
    }
    cout<<"Bieu thuc a co gia tri: "<<suma<<endl;
    cout<<"Bieu thuc b co gia tri: "<<sumb<<endl;
    cout<<"Bieu thuc c co gia tri: "<<sumc<<endl;
    cout<<"Bieu thuc d co gia tri: "<<sumd<<endl;
    return 0;
}