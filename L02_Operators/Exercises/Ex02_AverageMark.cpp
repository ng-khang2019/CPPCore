#include <iostream>
#include <iomanip>

using namespace std;
    /* See a better solution in Vector package
     */

int main() {
    float math, chemistry, english, physics, literature;
    cout<<"Enter your Math grade: ";
    cin>>math;
    if (math < 0 || math > 10)
    {
        cout<<"Invalid input"<<endl;
        return 0;
    }
    cout<<"Enter your Chemistry grade: ";
    cin>>chemistry;
    if (chemistry < 0 || chemistry > 10)
    {
        cout<<"Invalid input, grade value must be between 0 and 10"<<endl;
        return 0;
    }
    cout<<"Enter your English grade: ";
    cin>>english;
    if (english < 0 || english > 10)
    {
        cout<<"Invalid input, grade value must be between 0 and 10"<<endl;
        return 0;
    }
    cout<<"Enter your physics grade: ";
    cin>>physics;
    if (physics < 0 || physics > 10)
    {
        cout<<"Invalid input, grade value must be between 0 and 10"<<endl;
        return 0;
    }
    cout<<"Enter your literature grade: ";
    cin>>literature;
    if (literature < 0 || literature > 10)
    {
        cout<<"Invalid input, grade value must be between 0 and 10"<<endl;
        return 0;
    }

    const float sum = math + chemistry + literature + physics + english;
    const float average = sum / 5;

    cout<<"Your average mark is "<<fixed<<setprecision(2)<<average<<endl;
    return 0;
}