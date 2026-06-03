#include <cstring>
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void nhapChuoi(char st[MAX_SIZE]);
void nhapChuoi(string &str);
void xuatChuoi(char st[MAX_SIZE]);
void xuatChuoi(string &str);
bool doiXung(char st[MAX_SIZE]);

int main()
{
    char st[50];
    string str;
    nhapChuoi(st);
    nhapChuoi(str);
    xuatChuoi(st);
    xuatChuoi(str);
    return 0;
}

void nhapChuoi(char st[MAX_SIZE])
{
    cout<<"Nhap chuoi: ";
    cin.getline(st,MAX_SIZE);
    // Hoac
    // fgets(st,MAX_SIZE,stdin);
}

void nhapChuoi(string &str)
{
    cout<<"Nhap chuoi: ";
    getline(cin,str);

}

void xuatChuoi(char st[MAX_SIZE])
{
    cout<<st<<endl;
}

void xuatChuoi(string &str)
{
    cout<<str<<endl;

}

bool doiXung(char st[MAX_SIZE])
{
    for (int i = 0;i < strlen(st)/2;i++)
    {
        if (st[i] != st[strlen(st)-1-i]) return false;
    }

    return true;
}