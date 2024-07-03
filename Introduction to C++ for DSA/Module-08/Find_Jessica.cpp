#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    string word;
    char j[8] = "Jessica";
    int flag = 0;
    while (ss >> word)
    {
        if (word == j)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}