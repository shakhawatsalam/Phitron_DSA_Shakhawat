#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int a = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            a = i;
        }
    }

    if (a)
    {
        cout << a << endl;
    }
    else
        cout << -1 << endl;

    return 0;
}