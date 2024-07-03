#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int b;
    cin >> b;
    int *arrb = new int[b];
    for (int i = 0; i < n; i++)
    {
        arrb[i] = arr[i];
    }
    delete[] arr;
    for (int i = n; i < b; i++)
    {
        cin >> arrb[i];
    }

    for (int i = 0; i < b; i++)
    {
        cout << arrb[i] << " ";
    }
    delete[] arrb;
    return 0;
}