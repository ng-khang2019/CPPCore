#include <iostream>
#include <string>
using namespace std;

const float PI = 3.1415926535f;
const string MY_NAME = "Khang";
constexpr int SECONDS_PER_DAY = 24 * 60 * 60;

int main ()
{
    cout<<"Circle area with radius of 5 is: "<<5*5*PI<<endl;
    cout<<"My name is "<<MY_NAME<<endl;
    cout<<"Total seconds in one day are: "<<SECONDS_PER_DAY<< "(s)"<<endl;
}