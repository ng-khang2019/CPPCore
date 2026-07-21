#include <iostream>
#include <cstring>
using namespace std;

void viTriXuatHien(char chuoi[], char kyTu) {
    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == kyTu) {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    char chuoi[] = "aibicimieigigidnelasdf";
    viTriXuatHien(chuoi, 'i');
    return 0;
}