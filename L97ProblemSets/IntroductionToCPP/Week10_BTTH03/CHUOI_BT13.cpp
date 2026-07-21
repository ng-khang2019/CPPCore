#include <cstring>
#include <iostream>
using namespace std;

void sapXepMang(char chuoi[])
{
    for (int i = 0; i < strlen(chuoi); i++)
    {
        bool swapped = false;
        for (int j = 0; j < strlen(chuoi) - 1 - i; j++)
        {
            if (chuoi[j] > chuoi[j + 1])
            {
                char temp = chuoi[j];
                chuoi[j] = chuoi[j + 1];
                chuoi[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

char xuatHienNhieuNhat(char chuoi[])
{
    char chuoiCopy[strlen(chuoi)+1];
    strcpy(chuoiCopy, chuoi);

    sapXepMang(chuoiCopy);

    int maxCount = 1;
    int currentCount = 1;
    char kyTuMax = chuoiCopy[0];
    for (int i = 1; i < strlen(chuoiCopy); i++)
    {
        if (chuoiCopy[i] == chuoiCopy[i-1]) currentCount++;
        else
        {
            if (currentCount > maxCount)
            {
                maxCount = currentCount;
                kyTuMax = chuoiCopy[i-1];

            }
            currentCount = 1;
        }
    }
    return kyTuMax;
}

char xuatHienNhieuNhat2(char chuoi[])
{
    int dem[256] = {0};

    for (int i = 0; chuoi[i] != '\0'; i++)
        dem[(char)chuoi[i]]++;

    int maxCount = 0;
    char kyTuMax = chuoi[0];

    for (int i = 0; i < 256; i++)
    {
        if (dem[i] > maxCount)
        {
            maxCount = dem[i];
            kyTuMax = (char)i;
        }
    }

    return kyTuMax;
}

int main()
{
    char chuoi[] = "asdCCklCCeCCCCoauCbvCCCCyqCCCCoekCjls";
    cout << chuoi << endl;
    cout << xuatHienNhieuNhat2(chuoi) << endl;
    return 0;
}