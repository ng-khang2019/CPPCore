#include <iostream>
#include <cstring>
using namespace std;

void thayTheKyTu(char chuoi[], char kyTu, char thayThe)
{
    for (int i = 0; i < strlen(chuoi); i++)
    {
        if (chuoi[i] == kyTu)
        {
            chuoi[i] = thayThe;
        }
    }
}

int main()
{
    char chuoi[] = "Hello, World!";
    thayTheKyTu(chuoi, 'o', 'a');
    cout<<"Chuoi sau khi thay the ky tu: "<<chuoi<<endl;
    return 0;
}