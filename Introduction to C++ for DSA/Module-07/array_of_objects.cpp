#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    // cin.ignore();
    Student a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    
    cout << a[2].name << " " << a[2].roll << " " << a[2].marks << endl;
    return 0;
}