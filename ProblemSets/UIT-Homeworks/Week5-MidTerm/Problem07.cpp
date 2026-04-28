#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n);

int main()
{
    int n;
    cout<<"Nhap vao mot so nguyen: "<<endl;
    cin>>n;
    if (isPrime(n)) cout<<n<<" la so nguyen to"<<endl;
    else
    {
        cout<<n<<" khong phai la so nguyen to"<<endl;
    }
    return 0;
}

bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;
    for (int i = 3;i <= sqrt(n);i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}