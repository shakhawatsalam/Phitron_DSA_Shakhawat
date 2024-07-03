#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    switch (x)
    {
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "three" << endl;
        break;
    case 4:
        cout << "four" << endl;
        break;
    case 5:
        cout << "five" << endl;
        break;
    default:
        cout << "nothin matched";
    }
    return 0;
}