#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter the year: ";
    int n;
    cin>>n;
    if (n % 100 == 0) {
        if (n % 400 == 0) {
            cout<<"Leap year";
        } else {
            cout<<"Not leap year";
        }
    } else if (n % 4 == 0 && n % 100 != 0) {
        cout<<"Leap year";
    } else
    {
        cout<<"Not leap year";
    }
}
