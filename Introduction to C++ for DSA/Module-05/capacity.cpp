#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "Hello World";
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;
    // string a;
    // cout << a.capacity();
    // string s = "HElllo"; //* s.clear()

    // string s;
    // s.empty(); == true

    string s;
    cin >> s;
    s.resize(10);
    s.resize(11, 'd');
    cout << s.size() << endl;
    cout << s << endl;
    return 0;
}