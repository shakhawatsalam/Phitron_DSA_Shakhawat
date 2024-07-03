#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, a;
        cin >> s >> a;
        int siz = a.size();
        while (s.find(a) != -1)
        {
            s.replace(s.find(a), siz, "#");
        }
        cout << s << endl;
    }

    return 0;
}