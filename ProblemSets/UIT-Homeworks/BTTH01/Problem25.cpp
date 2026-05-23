#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Nhap mot so nguyen: ";
    cin>>n;

    switch (n % 2) {
        case 0:
            cout<<n<<" la so chan"<<endl;
            break;
        case 1:
        case -1:
            cout <<n<<" la so le"<<endl;
            break;
    }
    return 0;
}