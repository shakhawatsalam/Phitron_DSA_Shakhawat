#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;

    while (cin >> s1 >> s2)
    {
        int i = 0, j = 0;

        while (i < s1.length() && j < s2.length())
        {
            if (s1[i] == s2[j])
            {
                j++;
            }
            i++;
        }
        if (j == s2.length())
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }

    return 0;
}
