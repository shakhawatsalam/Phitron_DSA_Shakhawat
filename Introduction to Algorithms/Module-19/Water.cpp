#include <bits/stdc++.h>
using namespace std;

int first_largest(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int second_largest(int a[], int n, int first_largest)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max && a[i] != first_largest)
        {
            max = a[i];
        }
    }
    return max;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int iMax = first_largest(a, n);
        int jMax = second_largest(a, n, iMax);
        for (long long int i = 0; i < n; i++)
        {
            if (a[i] == iMax || a[i] == jMax)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}