#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int total_mark;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].total_mark;
    }
    Student b[n];
    int l = 0;
    for (int i = n - 1; i >= 0; i--)
    {

        b[l].section = a[i].section;
        l++;
    }

    for (int i = 0; i < n; i++)
    {

        cout << a[i].name << " " << a[i].cls << " " << b[i].section << " " << a[i].total_mark << endl;
    }

    return 0;
}