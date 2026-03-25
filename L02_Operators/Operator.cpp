#include <iostream>
using namespace std;
int main ()
{
    int a; int b;
    std::cout<<"Enter the first number: ";
    std::cin >>a;
    std::cout<<"Enter the second number: ";
    std::cin>>b;

    std::cout<<"Sum of two number: " << a+b << endl;
    std::cout<<"Difference of two number: " << a-b << endl;
    std::cout<<"Product of two number: " << a*b << endl;
    std::cout<<"Division of two number: " << a/b << endl;
    std::cout<<"Modulus of two number: " << a%b << endl;
}
