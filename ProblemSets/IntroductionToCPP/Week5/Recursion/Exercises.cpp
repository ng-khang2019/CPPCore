#include <complex>
#include <iostream>
using namespace std;

class Exercises
{
public:
    static int sumOfEvens(int n)
    {
        if (n < 2) return 0;
        return n % 2 == 0 ? n + sumOfEvens(n - 2) : sumOfEvens(n - 1);
    }

    static int sumOfOdds(int n)
    {
        if (n < 1) return 0;
        return n % 2 == 0 ? sumOfOdds(n - 1) : n + sumOfOdds(n - 2);
    }

    static unsigned int sumOfDigits(unsigned long int n)
    {
        if (n < 10) return n;
        return n % 10 + sumOfDigits(n / 10);
    }

    static int countDigits(unsigned long int n)
    {
        if (n < 10) return 1;
        return 1 + countDigits(n / 10);
    }

    static int blabla()
    {

    }

    static int fibo(int n)
    {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return fibo(n-1) + fibo(n-2);
    }

    static double pow(double x, int y)
    {
        if (x == 0) return 0;
        if (y == 1) return x;
        if (y == 0) return 1;
        if (y < 0)
        {
            x = 1 / x;
            y = -y;
        }
        y--;
        return x * pow(x, y);
    }

    static int factorial(int n) {
        if (n == 0) return 1;
        return n * factorial(n - 1);
    }

    static int padovan(int n)
    {
        if (n < 3) return 1;
        return padovan(n - 3) + padovan(n - 2);
    }

};

int main()
{
    cout << Exercises::sumOfEvens(8) << endl;
    cout << Exercises::sumOfOdds(1) << endl;
    cout << Exercises::sumOfDigits(12345678919) << endl;
    cout << Exercises::countDigits(4545555) << endl;
    cout<< pow(3, -3) << endl;
    cout << Exercises::factorial(4) << endl;

    cout <<"Dãy Fibonnacci từ 0 đến 8 "<< endl;
    cout <<"---------------------------"<< endl;
    for (int i = 1; i <= 8 ; i++)
    {
        cout << Exercises::fibo(i) <<" ";
    }
    cout << endl;
    cout <<"\nDãy Padovan từ 0 đến 8 "<< endl;
    cout <<"---------------------------"<< endl;
    for (int i = 1; i <= 8 ; i++)
    {
        cout << Exercises::padovan(i) <<" ";
    }

}
