#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int k = 1;
    while (k <= n)
    {
        cout << k << endl;
        k = k * 2;
    } // * O(lonN);

    // for (int i = n / 2; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j = j + i)
    //     {
    //         cout << i << " "<< j << endl;
    //     }
    // } //* O(N);

    // for (int i = n / 2; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j = j * 2)
    //     {
    //         cout << i << " -" << j << endl;
    //     }
    // } // * O(NlogN);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         for (int k = j; k > 0; k--)
    //         {
    //             cout << i << "-" << j << "-" << k << endl;
    //         }
    //     }
    // } // * O(N*J*K) O(N*N*N)

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << i << '-' << j << endl;
    //     }
    // }  // * O(N*N)
    return 0;
}