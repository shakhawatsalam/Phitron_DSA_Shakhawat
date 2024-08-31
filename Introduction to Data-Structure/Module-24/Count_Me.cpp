#include <bits/stdc++.h>
using namespace std;
// class cmp
// {
// public:
//     bool operator()(pair<string, int> &a, pair<string, int> &b)
//     {
//         if (a.second > b.second)
//         {
//             return true;
//         }
//         else
//         {
//             return a.second < b.second;
//         }
//     };
// };
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {

        string sentence;
        getline(cin, sentence);
        string word;
        string maxWord;
        int maxCount = 0;
        stringstream ss(sentence);
        map<string, int> mp;

        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > maxCount)
            {
                maxCount = mp[word];
                maxWord = word;
            }
        }

        cout << maxWord << " " << maxCount << endl;
    }
    return 0;
}
