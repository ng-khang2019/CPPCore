#include <iostream>
using namespace std;

int main()
{
    cout<<"Nhap vao mot so nguyen: "<<endl;
    int n;
    cin>>n;
    if (n % 3 == 0 && n % 5 == 0) {
        cout<<n<<" chia het cho ca 3 va 5"<<endl;
    } else if (n % 5 == 0) {
        cout<<n<<" chi chia het cho 5"<<endl;
    } else if (n % 3 == 0) {
        cout<<n<<" chi chia het cho 3"<<endl;
    } else {
        cout<<n<<" khong chia het cho ca 3 hoac 5"<<endl;
    }
    return 0;
}