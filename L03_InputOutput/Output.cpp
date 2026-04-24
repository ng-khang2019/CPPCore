#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    /* Use most common ways to print output is to use "cout" or "printf()".
     * Use "cout" for quick and standard output, "printf()" for formatted
     * output.
     */
    cout<<"Common output methods: "<<endl;
    int a = 4; char b = 'b'; float c = 3.14234;
    cout<<a<<" "<<b<<" "<<c<<endl;
    printf("%d\t%c\t%.2f\n",a,b,c);
    cout<<"\nAdvanced formatted output from <iomanip> library: "<<endl;
    cout<<setw(15)<<left<<"ID";
    cout<<setw(20)<<left<<"Name";
    cout<<setw(30)<<right<<"Major"<<endl;

    cout<<setfill('-');
    cout<<setw(65)<<""<<endl;
    cout<<setfill(' ');

    cout<<setw(15)<<left<<60020734;
    cout<<setw(20)<<left<<"Khang Nguyen";
    cout<<setw(30)<<right<<"Information Security"<<endl;
    return 0;
}
