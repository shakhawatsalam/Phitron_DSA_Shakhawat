#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {

        string s;
        getline(cin, s);
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i <= 2)
            {

                sum1 += s[i] - '0';
            }
            if (i > 2)
            {

                sum2 += s[i] - '0';
            }
        }
        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

// 01876288562ShawonSoftware @Engineer sksawon726@gamil.com
// 01876288562ShawonSoftware @Engineer