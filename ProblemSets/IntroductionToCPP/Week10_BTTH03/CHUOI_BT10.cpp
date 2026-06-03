#include <iostream>
using namespace std;

void inKyTuHoa(char chuoi[])
{
    for (int i = 0; chuoi[i] != '\0'; i++)
    {
        if (chuoi[i] >= 'A' && chuoi[i] <= 'Z')
        {
            cout << chuoi[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    char chuoi[] = "HasdflJaosdfjGalsdfBsldfV";
    inKyTuHoa(chuoi);
    return 0;
}