#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int min = INT_MAX;
    int max = INT_MIN;
    if (a>= b && a >= c)
    {
        max = a;
    }
    else if (b>= a && b >= c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    if (a <= b && a <= c)
    {
        min = a;
    }
    else if (b <= a && b <= c)
    {
        min = b;
    }
    else
    {
        min = c;
    }
    cout << min << " " << max;

    return 0;
}