#include <iostream>
#include <cstring>
using namespace std;

int viTriChuoiCon(char chuoiMe[], char chuoiCon[])
{
    for (int i = 0; i < strlen(chuoiMe); i++)
    {
        if (chuoiMe[i] == chuoiCon[0])
        {
            int j;
            for (j = 0; j < strlen(chuoiCon); j++)
            {
                if (chuoiMe[i + j] != chuoiCon[j]) break;
            }
            if (j == strlen(chuoiCon)) return i;
        }
    }
    return -1;
}

void xoaMotTu(char chuoi[], char tu[])
{
    cout << "Nhap vao tu muon xoa: ";
    cin.getline(tu, strlen(chuoi));
    int viTri = viTriChuoiCon(chuoi, tu);
    while (viTri != -1)
    {
        for (int i = viTri; i < strlen(chuoi); i++)
        {
            chuoi[i] = chuoi[strlen(tu) + i];
        }
        viTri = viTriChuoiCon(chuoi, tu);
    }
}

int main()
{
    char chuoi[] = "Mot hai ba bon hai nam sau bay hai tam chin muoi";
    char tu[strlen(chuoi)];
    xoaMotTu(chuoi, tu);
    cout << "Chuoi sau khi xoa tu \"" << tu << "\": " << chuoi << endl;
    return 0;
}
