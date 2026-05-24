#include <iostream>
using namespace std;

class Excersise2
{
public:
    // 1.a
    int countDigits( int n)
    {
        if (n <= 0) return -1;
        int count = 0;
        while (n > 0)
        {
            n /= 10;
            count++;
        }
        return count;
    }

    // 1.b
    int sumDigits(int n)
    {
        if (n < 0) return -1;
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    // 1.c
    int sumOfOddDigits(int n)
    {
        if (n < 0) return -1;
        int sum = 0;
        while (n > 0)
        {
            sum += ((n % 10) % 2 != 0) ? (n % 10) : 0;
            n /= 10;
        }
        return sum;
    }

    // 1.d
    int sumOfEvenDigits(int n)
    {
        if (n < 0) return -1;
        int sum = 0;
        while (n > 0)
        {
            sum += ((n % 10) % 2 == 0) ? (n % 10) : 0;
            n /= 10;
        }
        return sum;
    }

    // 1.d
    int reverseNumber(int n)
    {
        if (n < 0) return -1;
        int reverse = 0;
        while (n > 0)
        {
            reverse = reverse * 10 + (n % 10);
            n /= 10;
        }
        return reverse;
    }

};

int main()
{
    Excersise2 e2;
    unsigned int n = 12345;
    cout<<"Total digits: "<<e2.countDigits(n)<<endl;
    cout<<"Sum of digits: "<<e2.sumDigits(1234567)<<endl;
    cout<<"Sum of odd digits: "<<e2.sumOfOddDigits(1234567)<<endl;
    cout<<"Sum of odd digits: "<<e2.sumOfEvenDigits(1234567)<<endl;
    cout<<"Reverse number: "<<e2.reverseNumber(01567);
}
