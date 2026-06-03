#include <iostream>
#include <cstring>
using namespace std;


bool kiemTraChuoiCon(char chuoiMe[], char chuoiCon[])
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
            --j;
            if (chuoiMe[i+j] == chuoiCon[j]) return true;
        }
    }
    return false;
}

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

int main()
{
    char chuoiMe[] = "asdfsghjtibabchdxfghggsdfg";
    char chuoiCon[] = "abc";
    cout << kiemTraChuoiCon(chuoiMe, chuoiCon) << endl;
    cout << viTriChuoiCon(chuoiMe, chuoiCon) << endl;
    return 0;
}