#include <cstring>
#include <iostream>
using namespace std;

bool doiXung(char st[])
{
    for (int i = 0;i < strlen(st)/2;i++)
    {
        if (st[i] != st[strlen(st)-1-i]) return false;
    }

    return true;
}

int main()
{
    string str = "abcddcba";
    char st[] = "abcddcba";
    cout << doiXung(st) << endl;
    return 0;
}