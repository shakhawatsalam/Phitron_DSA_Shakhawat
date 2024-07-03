#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int unique_id;
    char name[101];
    char section;
    int total_marks;
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        Student s, r, a;
        cin >> s.unique_id >> s.name >> s.section >> s.total_marks;
        cin >> r.unique_id >> r.name >> r.section >> r.total_marks;
        cin >> a.unique_id >> a.name >> a.section >> a.total_marks;

        Student highest = s;

        if (r.total_marks > highest.total_marks ||
            (r.total_marks == highest.total_marks && r.unique_id < highest.unique_id))
        {
            highest = r;
        }

        if (a.total_marks > highest.total_marks ||
            (a.total_marks == highest.total_marks && a.unique_id < highest.unique_id))
        {
            highest = a;
        }
        cout << highest.unique_id << " " << highest.name << " " << highest.section << " " << highest.total_marks << endl;
    }

    return 0;
}