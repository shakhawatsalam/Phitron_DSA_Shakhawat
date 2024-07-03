#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    switch (x % 2)
    {
    case 0:
        cout << "EVEN";
        break;
    case 1:
        cout << "ODD";
        break;
    }
    return 0;
}