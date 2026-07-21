#include <iostream>
using namespace std;

void linearEquation(int a, int b)
{
    if (a == 0) cout << "Linear equation has no solution";
    else cout << "x = " << -b*1.0/a;
}

int main()
{
    linearEquation(3, 2);
    return 0;
}