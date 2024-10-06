#include <bits/stdc++.h>
using namespace std;
int sum = 0;
void print_number(int n)
{
    if (n == 11)
        return;
    sum += n;
    // cout << n << " ";

    print_number(n + 1);
}
int main()
{
    print_number(1);
    cout << sum;

    return 0;
}