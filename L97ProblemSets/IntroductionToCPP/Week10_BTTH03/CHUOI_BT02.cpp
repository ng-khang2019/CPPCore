#include <iostream>
using namespace std;

int doDaiChuoi(char chuoi[])
{
    int length = 0;
    while (chuoi[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char chuoi[] = "Hello, World!";
    cout<<"Chuoi \""<<chuoi<<"\" co do dai la "<<doDaiChuoi(chuoi)<<endl;
    return 0;
}