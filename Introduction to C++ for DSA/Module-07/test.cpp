#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;

    string word;
    int count = 0;
    // * For loop syntex
    // for (; ss >> word; count++)
    // {
    // }
    // * While Loop syntex
    while (ss >> word)
    {
        count++;
    }
    cout << count << endl;

    return 0;
}