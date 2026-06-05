#include <iostream>

using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort(int a, int b, int c )
{
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if (a>b) swap(a,b);
    if (a>c) swap(a,c);
    if (b>c) swap(b,c);
    cout<<a<<" "<<b<<" "<<c;
}


int main()
{
    return 0;
}