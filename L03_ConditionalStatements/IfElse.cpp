#include <iostream>
using namespace std;
int findMaxBetweenThree (int a, int b, int c);
int findMaxBetweenThree2 (int a, int b, int c);
int main() {
    int a,b,c;
    std::cout<<"Enter first number: "; std::cin>>a;
    std::cout<<"Enter second number: "; std::cin>>b;
    std::cout<<"Enter third number: "; std::cin>>c;
    std::cout<<"Largest number is " << findMaxBetweenThree2(a,b,c) << endl;
    return 0;
}
int findMaxBetweenThree (int a, int b, int c) {
    int m = 0;
    if (a > b && a > c) m = a;
    if (b > c && b > a) m = b;
    if (c > a && c > b) m = c;
    return m;
}
int findMaxBetweenThree2 (int a, int b, int c) {
    int m = a;
    if (m < b) m = b;
    if (m < c) m = c;
    return m;
}
