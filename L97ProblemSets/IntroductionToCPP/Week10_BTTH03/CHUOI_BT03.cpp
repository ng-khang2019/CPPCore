#include <iostream>
#include <cstring>
using namespace std;

void daoNguoc(char chuoi[])
{
    for (int i = 0; i < strlen(chuoi) / 2; i++) {
        char temp = chuoi[i];
        chuoi[i] = chuoi[strlen(chuoi) - 1 - i];
        chuoi[strlen(chuoi) - 1 - i] = temp;
    }
}

int main()
{
    char chuoi[] = "Hello, World!";
    daoNguoc(chuoi);
    cout<<"Chuoi sau khi dao nguoc: "<<chuoi<<endl;
    return 0;
}