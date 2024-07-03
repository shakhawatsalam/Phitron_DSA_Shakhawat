#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_mark;
    int eng_mark;
    int total_mark;
};
bool cmp(Student a, Student b)
{
    if (a.total_mark == b.total_mark)
    {
        return a.id < b.id;
    }
    else
    {

        return a.total_mark > b.total_mark;
    }
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math_mark >> a[i].eng_mark;
    }
    for (int i = 0; i < n; i++)
    {

        a[i].total_mark = a[i].math_mark + a[i].eng_mark;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].math_mark << " " << a[i].eng_mark << " " << endl;
    }

    return 0;
}