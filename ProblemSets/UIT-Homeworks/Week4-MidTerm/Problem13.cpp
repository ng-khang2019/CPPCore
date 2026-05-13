#include <iostream>
using namespace std;
int main ()
{
    unsigned long long n, sum = 0;
    cout<<"Nhap so nguyen duong n: ";
    cin>>n;

    int temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    cout<<"Tong cac chu so cua "<<n<<" la: " <<sum<<endl;
    cin>>n;
    return 0;
}