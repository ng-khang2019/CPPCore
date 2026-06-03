#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

void thayTheKyTu(char chuoi[], char thayThe)
{
    srand(time(nullptr));
    int ngauNhien = rand() % (strlen(chuoi)-1);
    char kyTuBatKy = chuoi[ngauNhien];
    for (int i = 0; i < strlen(chuoi); i++)
    {
        if (chuoi[i] == kyTuBatKy)
        {
            chuoi[i] = thayThe;
        }
    }
}

int main()
{
    char chuoi[] = "ajoafaijasadfoijauasafajadgfdvbdfgaal";
    cout<<"Chuoi truoc khi thay the ky tu: "<<chuoi<<endl;
    thayTheKyTu(chuoi, 'x');
    cout<<"Chuoi sau khi thay the ky tu: "<<chuoi<<endl;
    return 0;
}