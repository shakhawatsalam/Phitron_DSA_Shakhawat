#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) // * O(N*N) n Sqrt
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "hello" << endl;
        }
    }

    // selection sort
    for (int i = 0; i <= n - 1; i++) // * O(N*N) n Sqrt
    {
        for (int j = i + 1; j < n; j++)
        {
        }
    }
    return 0;
}