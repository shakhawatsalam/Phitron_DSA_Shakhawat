#include <bits/stdc++.h>
using namespace std;

void print(string &s)
{
    s = "hello python";
    cout << s << " inside function" << endl;
}

int main()
{
    string s = "Hello World";
    print(s);
    cout << s << " inside main function" << endl;
    return 0;
}