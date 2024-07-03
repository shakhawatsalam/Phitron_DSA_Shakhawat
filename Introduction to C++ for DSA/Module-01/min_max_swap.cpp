#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c = min(a, b);
    int m = max(a, b);
    cout << c << endl;
    cout << m << endl;
    return 0;
}