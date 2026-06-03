#include <iostream>
#include <cstring>
using namespace std;

int viTriDauTien(char chuoi[], char kyTu) {
    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == kyTu) {
            return i;
        }
    }
    return -1;
}

int main()
{
    char chuoi[] = "abcdefhiaaaajklmnogp";
    cout << viTriDauTien(chuoi, 'a') << endl;
    return 0;
}