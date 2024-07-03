#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student fun()
{
    Student rahim(320, 5, 4.99);

    return rahim;
}

int main()
{

    Student *kainm = new Student(32, 10, 4.66);

    cout << kainm->gpa << " " << kainm->roll;

    return 0;
}