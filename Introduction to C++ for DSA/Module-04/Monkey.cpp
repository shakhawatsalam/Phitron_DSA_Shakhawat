#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[100001];

    while (cin.getline(c, 1000001))
    {
        sort(c, c + strlen(c));

        cout << c << endl;
    }

    return 0;
}
