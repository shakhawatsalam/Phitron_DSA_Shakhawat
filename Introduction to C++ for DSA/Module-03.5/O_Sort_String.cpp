#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int arr[26] = {0};
    for (int i = 0; i < x; i++)
    {
        char c;
        cin >> c;
        arr[c - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            cout << (char)(i + 'a');
        }
        arr[i] = 0;
    }
}