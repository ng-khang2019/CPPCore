#include <cstring>
#include <iostream>
using namespace std;

int soLanXuatHien(char chuoi[], char kyTu)
{
    int count = 0;
    for (int i = 0; chuoi[i] != '\0'; i++)
    {
        if (chuoi[i] == kyTu) count++;
    }
    return count;
}

int main()
{
    char chuoi[] = "akjdfgojewroobjoaolkdjfogijueowrtjaldksjmfgljka!";
    cout << "So lan xuat hien cua ky tu 'a' la: " << soLanXuatHien(chuoi, 'a') << endl;
    return 0;
}