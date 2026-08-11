#include <iostream>
using namespace std;
#define MAXN 100

int Input()
{
    int n;
    cin >> n;
    return n;
}

void NhapMang(int A[], int N)
{
    for (int i = 0; i < N; i++)
        cin >> A[i];
}

void SapXepSoChanGiamDan(int A[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        if (A[i] % 2 == 0)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (A[j] % 2 == 0 && A[i] < A[j])
                {
                    swap(A[i], A[j]);
                }
            }
        }
    }
}

void XuatMang(int A[], int N)
{
    for (int i = 0; i < N; i++)
        cout << A[i] << '\t';
}

int main()
{
    int a[MAXN], n;
    n = Input();

    NhapMang(a, n);
    SapXepSoChanGiamDan(a, n);
    XuatMang(a, n);

    return 0;
}




