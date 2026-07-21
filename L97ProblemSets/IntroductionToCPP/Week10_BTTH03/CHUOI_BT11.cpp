#include <cstring>
#include <iostream>
using namespace std;

void doiChuXenKe(char chuoi[])
{
    for (int i = 0; i < strlen(chuoi); i++)
    {
        if (i % 2 == 0)
        {
            chuoi[i] = toupper(chuoi[i]);
        } else
        {
            chuoi[i] = tolower(chuoi[i]);
        }
    }
}

int main()
{
    char chuoi[] = "Hasdfrlsdfasdofuoajwfouoasdjfeoaldf";
    doiChuXenKe(chuoi);
    cout << chuoi << endl;
    return 0;
}