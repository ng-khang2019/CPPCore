#include <iostream>
using namespace std;
int fun(int arr[][6], int n)
{

    int i,j;
    for (i = 0; i < n; i++)
    {
        for (j=0;j<n;j++)
            if(arr[i][j] <= 0)
                break;
        if (j==n) return i;
        for (j=0;j<n;j++)
            if(arr[i][j] >= 0)
                break;
        if (j==n) return i;
    }
    return -1;
}
int main()
{ int a[6][6]={
    {0,-1,2,-3,4,-5},
    {-1,0,-1,0,-1,0},
    {0,1,0,1,0,1},
    {-6,-5,-4,-3,-2,-1},
    {1,-1,1,-1,1,-1},
    {1,2,3,4,5,6}
};
    cout<<fun(a,6);
    return 0;
}
