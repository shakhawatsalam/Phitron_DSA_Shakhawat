#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Top half including the middle line
    for (int i = 0; i < n / 2; i++)
    {
        // Print leading spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Print the backslash
        cout << "\\";

        // Print the middle spaces
        for (int j = 0; j < n - 2 - 2 * i; j++)
        {
            cout << " ";
        }

        // Print the forward slash
        cout << "/" << endl;
    }

    // Middle line with the 'X'
    for (int j = 0; j < n / 2; j++)
    {
        cout << " ";
    }
    cout << "X" << endl;

    // Bottom half
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        // Print leading spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Print the backslash
        cout << "\\";

        // Print the middle spaces
        for (int j = 0; j < n - 2 - 2 * i; j++)
        {
            cout << " ";
        }

        // Print the forward slash
        cout << "/" << endl;
    }

    return 0;
}




#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int side_space = 0;
    int forward_slash = 1;
    int back_slash = 1;
    int middle_space = n - 2;
    for (int i = 0; i < n; i++)
    {
        for (int g = 0; g < side_space; g++)
        {
            cout << "a";
        }
        for (int j = 0; j < forward_slash; j++)
        {
            cout << "\\";
        }
        for (int m = 0; m < middle_space; m++)
        {
            cout << "s";
        }
        for (int s = 0; s < back_slash; s++)
        {
            cout << '/';
        }
        if (i < (n / 2))
        {
            side_space++;
            middle_space -= 2;
        }

        if (i >= (n / 2))
        {
            side_space--;
        }

        if (i == (n / 2) - 1)
        {

            back_slash--;
            forward_slash--;
        }

        // * Printing X
        if (i == (n / 2))
        {
            cout << "X";
        }
        cout << endl;
    }

    for (int i = 0; i <= 2; i++)
    {
    }

    return 0;
}