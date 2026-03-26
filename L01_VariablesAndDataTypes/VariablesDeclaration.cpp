#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    int age;
    double height;

    std::cout<<"Enter your name:";
    std::cin>>name;

    std::cout<<"Enter your age:";
    std::cin>>age;

    std::cout<<"Enter your height in cm:";
    std::cin>>height;

    std::cout<<"Your name is " << name << endl;
    std::cout<<"Your age is " << age << " years old" << "\n";
    std::cout<<"Your height is " << height << " cm" << endl;
}