#include <iostream>
using namespace std;

int main()
{
    char n;
    cin >> n;

    if (n >= '0' && n <= '9')
    {
        cout << "IS DIGIT";
    }
    else if (n >= 'A' && n <= 'Z')
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (n >= 'a' && n <= 'z')
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    return 0;
}